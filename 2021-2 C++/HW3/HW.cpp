#include <iostream>
using namespace std;

class MyIntArray {

	int* ptr; // �Ҵ�� �迭�� ����Ű�� ������
	int size; // �迭�� ũ��
	int last; // �迭 �� ���� ����� ���� ������ �ε���
	int instanceId;

	static int numOfInstances; // MyIntArray ��ü ���� ī��Ʈ
	static int counter;

public:
	MyIntArray(int size = 10);  // ������
	MyIntArray(MyIntArray& src); // ���� ������
	~MyIntArray();  // �Ҹ���
	bool push(int n);
	bool pop(int& n);

	// ���� �߰��ؾ� �� ������ �Լ�
	MyIntArray& operator<<(int n);  // push: ��ü �ڽ��� �����ڸ� ����
	MyIntArray& operator>>(int& n); // pop: ��ü �ڽ��� �����ڸ� ����
	bool operator!();    	     // �迭�� ������� true ����
	MyIntArray& operator=(const MyIntArray& src);

	friend MyIntArray operator+(const MyIntArray& s1, const MyIntArray& s2);
};



MyIntArray::MyIntArray(int size) {

	this->ptr = new int[size];
	if (this->ptr == NULL) {
		cout << "�޸� �Ҵ� ����" << endl;
		exit(1);
	}

	this->size = size;
	this->last = -1;

	MyIntArray::numOfInstances++;

	this->instanceId = MyIntArray::counter++;

	cout << "��ü ����(id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << "): ��ü �� = " << MyIntArray::numOfInstances << endl;
}

MyIntArray::MyIntArray(MyIntArray& src) {
	this->ptr = new int[src.size];
	if (this->ptr == NULL) {
		cout << "�޸� �Ҵ� ����" << endl;
		exit(1);
	}

	for (int i = 0; i < src.size; i++) {
		*(this->ptr + i) = *(src.ptr + i);
	}

	this->size = src.size;
	this->last = src.last;

	MyIntArray::numOfInstances++;

	this->instanceId = MyIntArray::counter++;

	cout << "��ü ���� ����(id=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << "): ��ü �� = " << MyIntArray::numOfInstances << endl;
}

MyIntArray::~MyIntArray() {
	if (this->ptr != NULL) delete[] this->ptr;
	MyIntArray::numOfInstances--;
	cout << "��ü �Ҹ�: id=" << this->instanceId << ", ������ü��=" << MyIntArray::numOfInstances << endl;
}

bool MyIntArray::push(int n) {
	if (this->last == (this->size - 1)) {
		cout << "�迭�� �� á��" << endl;
		return false;
	}

	this->ptr[this->last + 1] = n;
	this->last++;
	cout << n << " push ��(��üid=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << ")" << endl;
	return true;
}

bool MyIntArray::pop(int& n) {
	if (this->last == -1) {
		cout << "�迭�� ��� ����" << endl;
		return false;
	}

	n = this->ptr[this->last];
	this->last--;
	cout << n << " pop ��(��üid=" << this->instanceId << ", size=" << this->size << ", last=" << this->last << ")\n";
	return true;
}

MyIntArray& MyIntArray::operator<<(int n) {
	cout << "operator<< : ";
	this->push(n);
	return *this;
}

MyIntArray& MyIntArray::operator>>(int& n) {
	cout << "operator>> : ";
	this->pop(n);// �����ؾ���
	return *this;
}

bool MyIntArray::operator!() {
	if (last == -1) {
		return true;
	}
	else { return false; }

	// �����ؾ���
}



int MyIntArray::numOfInstances = 0;
int MyIntArray::counter = 0;

int main() {
	MyIntArray a;
	a.push(10);
	a.push(20);

	MyIntArray b(a); // ���� ����
	b.push(30);

	int n;
	a.pop(n);
	b.pop(n);

	a << 3 << 5 << 7; // ��üa�� �迭�� 3, 5, 7 ������ push

}

