#include<iostream>
using namespace std;

#include"Calculator.h"
#include"Adder.h"

void Calculator::run(){
	cout << "�� ���� ���� �Է��Ͻÿ�>>";
	int a, b;
	cin >> a >> b;
	Adder adderObj(a, b);
	cout << adderObj.process();
}


