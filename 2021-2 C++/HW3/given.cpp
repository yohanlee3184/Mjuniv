#include <iostream>
using namespace std;

class MyIntArray {

	int* ptr; // 할당된 배열을 가리키는 포인터
	int size; // 배열의 크기
	int last; // 배열 내 값이 저장된 가장 마지막 인덱스
	int instanceId;

	static int numOfInstances; // MyIntArray 객체 수를 카운트
	static int counter;

public:
	MyIntArray(int size = 10);  // 생성자
	MyIntArray(MyIntArray& src); // 복사 생성자
	~MyIntArray();  // 소멸자
	bool push(int n);
	bool pop(int& n);

	// 새로 추가해야 할 연산자 함수
	MyIntArray& operator<<(int n);  // push: 객체 자신의 참조자를 리턴
	MyIntArray& operator>>(int& n); // pop: 객체 자신의 참조자를 리턴
	bool operator!();    	     // 배열이 비었으면 true 리턴
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
		cout << "배열이 꽉 찼음" << endl;
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
	this->push(n);
	return *this;
}

MyIntArray& MyIntArray::operator>>(int& n) {
	cout << "operator>> : ";
	this->pop(n);// 구현해야함
	return *this;
}

bool MyIntArray::operator!() {
	if (last == -1) {
		return true;
	}
	else { return false; }
	
	// 구현해야함
}



int MyIntArray::numOfInstances = 0;
int MyIntArray::counter = 0;

int main_01() {
	MyIntArray a;
	a.push(10);
	a.push(20);

	MyIntArray b(a); // 복사 생성
	b.push(30);

	int n;
	a.pop(n);
	b.pop(n);

	a << 3 << 5 << 7; // 객체a의 배열에 3, 5, 7 순서로 push
	
	return 0;
	}
	
