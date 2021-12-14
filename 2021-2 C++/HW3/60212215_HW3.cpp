#include <iostream>
using namespace std;

class MyIntArray {

	int* ptr; 
	int size; 
	int last; 
	int instanceId;
	static int numOfInstances; 
	static int counter;

public:
	MyIntArray(int size = 10);  
	MyIntArray(MyIntArray& src);
	~MyIntArray();  
	bool push(int n);
	bool pop(int& n);

	MyIntArray& operator<<(int n);  
	MyIntArray& operator>>(int& n);
	bool operator!();    	     
	MyIntArray& operator=(const MyIntArray& src);

	friend MyIntArray operator+(const MyIntArray& s1, const MyIntArray& s2);
};

MyIntArray::MyIntArray(int size) {

	this->ptr = new int[size];

	if (this->ptr == NULL) {
		cout << "메모리 할당 오류" << endl;
		exit(1);
	}

	this->size = size;
	this->last = -1;

	MyIntArray::numOfInstances++;

	this->instanceId = MyIntArray::counter++;

	cout << "객체 생성(id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << "): 객체 수 = " << MyIntArray::numOfInstances << endl;
}

MyIntArray::MyIntArray(MyIntArray& src) {

	this->ptr = new int[src.size];

	if (this->ptr == NULL) {
		cout << "메모리 할당 오류" << endl;
		exit(1);
	}

	for (int i = 0; i < src.size; i++) {
		*(this->ptr + i) = *(src.ptr + i);
	}

	this->size = src.size;
	this->last = src.last;

	MyIntArray::numOfInstances++;

	this->instanceId = MyIntArray::counter++;

	cout << "객체 복사 생성(id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << "): 객체 수 = " << MyIntArray::numOfInstances << endl;
}

MyIntArray::~MyIntArray() {

	if (this->ptr != NULL) delete[] this->ptr;

	MyIntArray::numOfInstances--;

	cout << "객체 소멸: id=" << this->instanceId << ", 남은객체수=" << MyIntArray::numOfInstances << endl;
}

bool MyIntArray::push(int n) {

	if (this->last == (this->size - 1)) {
		cout << "배열이 꽉 참" << endl;
		return false;
	}

	this->ptr[this->last + 1] = n;
	this->last++;

	cout << n << " push 됨(객체id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << ")" << endl;
	return true;

}

bool MyIntArray::pop(int& n) {

	if (this->last == -1) {
		cout << "배열이 비어 있음" << endl;
		return false;
	}

	n = this->ptr[this->last];
	this->last--;

	cout << n << " pop 됨(객체id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << ")\n";
	return true;

}

MyIntArray& MyIntArray::operator<<(int n) {
	cout << "operator<< : ";
	if (this->last!=(this->size-1)) { this->push(n); }
	return*this;
}

MyIntArray& MyIntArray::operator>>(int& n) {
	cout << "operator>> : ";
	if (this->last != -1) { this->pop(n); }
	return*this;
}

bool MyIntArray::operator!() {
	if (this->last == -1) { return true; }
	else { return false; }
}

MyIntArray& MyIntArray::operator=(const MyIntArray& src) {
	cout << "operator=: this(id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << "), src(id=" << src.instanceId << ", size=" << src.size << ", last=" << src.last << ")" << endl;
	delete[]this->ptr;

	this->ptr = new int[src.size];

	for (int i = 0; i < src.size; i++) {
		*(this->ptr + i) = *(src.ptr + i);
	}
	this->size = src.size;
	this->last = src.last;
	cout << "operator=: this(id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << "), ptr[]=";
	for (int i = 0; i < this->last + 1; i++) {
		cout << this->ptr[i] << " ";

	}
	cout << ")" << endl;

	return *this;
}

MyIntArray operator+(const MyIntArray& s1, const MyIntArray& s2) {
	cout << "operator+: s1(id=" << s1.instanceId << ", size=" << s1.size << ", last=" << s1.last << "), s2(id=" << s2.instanceId << ", size=" << s2.size << ", last=" << s2.last << ")" << endl;
	MyIntArray tmp(s1.size + s2.size);
	for (int i = 0; i < s1.last + 1; i++) {
		tmp.ptr[i] = s1.ptr[i];
	}

	for (int i = 0; i < s2.last + 1; i++) {
		tmp.ptr[s1.last + i + 1] = s2.ptr[i];
	}

	tmp.size = s1.size + s2.size;
	tmp.last = s1.last + s2.last + 1;

	cout << "operator+: tmp(id=" << tmp.instanceId << ", size=" << tmp.size << ", last=" << tmp.last << "), ptr[]=";
	for (int i = 0; i < tmp.last + 1; i++) {
		cout << tmp.ptr[i] << " ";

	}
	cout << ")" << endl;
	return tmp;
}
int MyIntArray::numOfInstances = 0;
int MyIntArray::counter = 0;

int main() {
	MyIntArray a;
	a.push(10);
	a.push(20);

	MyIntArray b(a); // 복사 생성
	b.push(30);

	int n;
	a.pop(n);
	b.pop(n);

	a << 3 << 5 << 7; // 객체a의 배열에 3, 5, 7 순서로 push
	MyIntArray c;
	c = a + b;	// a, b 두 객체의 배열을 합친 후 결과를 객체 c에 대입
	while (true) {
		if (!c) break; // c의 배열이 비어있는 상태이면 빠져 나감
		c >> n;
	}
}