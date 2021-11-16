#include<iostream>
using namespace std;

class Power {
	int punch;
	int kick;

	int instanceId;
	static int counter;
public:
	Power(int kick = 0, int punch = 0) {
		this->instanceId = Power::counter++;
		this->kick = kick;
		this->punch = punch;
		cout << "��ü ����: id=" << this->instanceId << ", kick=" << this->kick << ", punch=" << this->punch << endl;
	}
	Power(Power& src) {
		this ->instanceId = Power::counter++;
		this->kick = src.kick;
		this->punch = src.punch;
		cout << "��ü ���� ����: id=" << this->instanceId << ", kick=" << this->kick << ", punch=" << this->punch << endl;
	}
	~Power() {

		cout << "��ü �Ҹ�: id=" << this->instanceId << ", kick=" << this->kick << ", punch=" << this->punch << endl;
	}
	void show();
	Power& operator<<(int n);
};

void Power::show() {
	cout << "kick=" << kick << ", punch=" << punch << endl;
}

Power& Power::operator<<(int n) {
	cout << "operator << : ��ü id=" << this->instanceId << ", n=" << n<< endl;
	this->kick += n;
	this->punch += n;
	return *this;
}

int Power::counter = 0;

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}