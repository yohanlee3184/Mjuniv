#include<iostream>
using namespace std;

class MyIntArray {
	
	int* ptr;
	int size;
	int last;
	static int numOfInstances;

public:

	MyIntArray(int s = 3);
	MyIntArray(MyIntArray& copy);
	~MyIntArray();

	bool push(int n);
	bool pop(int& n);

};


int MyIntArray::numOfInstances = 0;

MyIntArray::MyIntArray(int s) {

	size = s;
	last = -1;
	ptr = new int[size];
	numOfInstances++;

	cout << "��ü ����(size=" << size << ", last=" << last << "): ��ü �� = " << numOfInstances << endl;

}

MyIntArray::MyIntArray(MyIntArray& copy) {
	size = copy.size;
	last = copy.last;
	ptr = new int[size];
	
	if (ptr == NULL) {
		cout << "�޸� �Ҵ� ����" << endl;
		exit(1);
	}

	for (int i = 0; i < last+1; i++) { ptr[i] = copy.ptr[i]; }
	numOfInstances++;

	cout << "��ü ���� ����(size=" << size << ", last=" << last << "): ��ü �� = " << numOfInstances << endl;

}

MyIntArray::~MyIntArray() {

	delete[] ptr;
	numOfInstances--;

	cout << "��ü �Ҹ�: ��ü �� = " << numOfInstances << endl;

}

bool MyIntArray::push(int n)
{
	if (last == size - 1) { cout << "�迭�� �� ��" << endl; return false; }

	else if (last < size - 1)
	{
		ptr[last + 1] = n;
		last++;
		cout << n << " push ��(size=" << size << ", last=" << last << ")" << endl;
		return true;
	}

}

bool MyIntArray::pop(int& n) {
	if (last < 0) return false;
	else if(last>=0) {
		n = ptr[last];
		last--;
		return true;
	}
}

int main() {

	MyIntArray a;
	a.push(10);
	a.push(20);

	MyIntArray b(5);
	b.push(30);
	b.push(40);
	b.push(50);

	MyIntArray c(a);
	c.push(60);
	c.push(70);

	int n;

	a.pop(n);
	cout << "a���� pop �� �� = " << n << endl;

	b.pop(n);
	cout << "b���� pop �� �� = " << n << endl;

	c.pop(n);
	cout << "c���� pop �� �� = " << n << endl;

}