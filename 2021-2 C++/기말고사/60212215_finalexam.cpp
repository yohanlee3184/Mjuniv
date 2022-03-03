#include <iostream>
using namespace std;

class Calculator {
private:

	int x, y;

protected:

	virtual void calc() {
		cout << "Calculator::calc() 실행" << endl;
	}

public:

	Calculator(int x, int y) {
		this->x = x;
		this->y = y;
		cout << "Calculator: 생성자 실행(x=" << this->x << ", y=" << this->y << ")" << endl;
	}
	void run() {
		this->calc();
	}
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}

	virtual ~Calculator() { cout << "Calculator: 소멸자 실행" << endl; }

};

class Adder :public Calculator {
public:
	Adder(int x, int y) :Calculator(x, y) { cout << "Adder: 생성자 실행" << endl; }
	virtual void calc() {
		Calculator::calc();
		int add = getX() + getY();
		cout << "Adder::calc() 계산 결과 = " << add << endl;
	}
	virtual ~Adder() { cout << "Adder: 소멸자 실행" << endl; }
};

class Subtractor :public Calculator {
public:
	Subtractor(int x, int y) :Calculator(x, y) { cout << "Subtractor: 생성자 실행" << endl; }
	virtual void calc() {
		Calculator::calc();
		int sub = getX() - getY();
		cout << "Subtractor::calc() 계산 결과 = " << sub << endl;
	}
	virtual ~Subtractor() { cout << "Subtractor: 소멸자 실행" << endl; }
};

class Multiplier :public Calculator {
public:
	Multiplier(int x, int y) :Calculator(x, y) { cout << "Multiplier: 생성자 실행" << endl; }
	virtual void calc() {
		Calculator::calc();
		int mult = getX() * getY();
		cout << "Multiplier::calc() 계산 결과 = " << mult << endl;
	}
	virtual ~Multiplier() { cout << "Multiplier: 소멸자 실행" << endl; }
};

template<class T1, class T2>
void operator+(T1& a, T2& b) {
	cout << "operator+: 입력a(x=" << a.getX() << ", y=" << a.getY() << "), 입력b(x=" << b.getX() << ", y=" << b.getY() << ")" << endl;
	cout << "operator+: sum of x = " << a.getX() + b.getX() << endl;
	cout << "operator+: sum of y = " << a.getY() + b.getY() << endl;
}

int main() {
	Calculator* cPtr[3];
	for (int i = 0; i < 3; i++) {
		if (i == 0) cPtr[i] = new Adder(10, 20);
		else if (i == 1) cPtr[i] = new Subtractor(30, 40);
		else cPtr[i] = new Multiplier(50, 60);
		cPtr[i]->run();
	}

	Adder* aPtr = (Adder*)cPtr[0];
	Subtractor* sPtr = (Subtractor*)cPtr[1];
	Multiplier* mPtr = (Multiplier*)cPtr[2];

	*aPtr + *sPtr;
	*sPtr + *mPtr;

	for (int i = 0; i < 3; i++)
		delete cPtr[i];

	return 0;
}