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

	cout << "°´Ã¼ »ý¼º(size=" << size << ", last=" << last << "): °´Ã¼ ¼ö = " << numOfInstances << endl;

}

MyIntArray::MyIntArray(MyIntArray& copy) {
	size = copy.size;
	last = copy.last;
	ptr = new int[size];
	
	if (ptr == NULL) {
		cout << "¸Þ¸ð¸® ÇÒ´ç ¿À·ù" << endl;
		exit(1);
	}

	for (int i = 0; i < last+1; i++) { ptr[i] = copy.ptr[i]; }
	numOfInstances++;

	cout << "°´Ã¼ º¹»ç »ý¼º(size=" << size << ", last=" << last << "): °´Ã¼ ¼ö = " << numOfInstances << endl;

}

MyIntArray::~MyIntArray() {

	delete[] ptr;
	numOfInstances--;

	cout << "°´Ã¼ ¼Ò¸ê: °´Ã¼ ¼ö = " << numOfInstances << endl;

}

bool MyIntArray::push(int n)
{
	if (last == size - 1) { cout << "¹è¿­ÀÌ ²Ë Âü" << endl; return false; }

	else if (last < size - 1)
	{
		ptr[last + 1] = n;
		last++;
		cout << n << " push µÊ(size=" << size << ", last=" << last << ")" << endl;
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
	cout << "a¿¡¼­ pop ÇÑ °ª = " << n << endl;

	b.pop(n);
	cout << "b¿¡¼­ pop ÇÑ °ª = " << n << endl;

	c.pop(n);
	cout << "c¿¡¼­ pop ÇÑ °ª = " << n << endl;

}