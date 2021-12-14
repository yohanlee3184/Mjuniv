#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator+ (Power op2);
	bool operator==(Power op2);
	Power& operator+=(Power op2);
	Power& operator*=(Power op2);
	Power& operator++();
	bool operator!();
	Power operator++(int x);//friend Power& operator++(Power& p,int x)
	Power& operator--();
	Power operator--(int x);
	friend Power operator+(int op1, Power op2);
	Power& operator<<(int n);
};

Power& Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this;
}

Power operator+(int op1, Power op2) {
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

bool Power::operator==(Power op2) {
	if (kick == op2.kick && punch == op2.punch)return true;
	else return false;
}

Power& Power::operator+=(Power op2) {
	this->kick = this->kick + op2.kick;
	this->punch = this->punch + op2.punch;
	return *this;
}

Power& Power::operator*=(Power op2) {
	this->kick = this->kick * op2.kick;
	this->punch = this->punch * op2.punch;
	return *this;
}
Power& Power:: operator++() {
	kick++;
	punch++;
	return *this;
}

Power Power::operator--(int x) {
	Power tmp = *this;
	kick--;
	punch--;
	return tmp;
}

Power Power::operator++(int x){
	Power tmp = *this;
	kick++; punch++;
	return tmp;
}


bool Power::operator!() {

	if (kick == 0 && punch == 0)return true;
	else return false;

}

Power& Power::operator--() {
	kick--;
	punch--;
	return *this;
}

int main_01() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
	return 0;
}