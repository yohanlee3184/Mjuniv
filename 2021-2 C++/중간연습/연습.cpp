#include<iostream>
using namespace std;

class Rectangle {
	int height;
	int width;
public:

	bool isSquare() {
		if (height == width) return true;
		else return false;
	}
	Rectangle() { height = 1, width = 1; }
	Rectangle(int a) { height = a, width = a; }
	Rectangle(int a, int b) { height = a, width = b; }
	~Rectangle() { cout << "�Ҹ��� ����"<<endl; }
};
int main_01() {

	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);
	if (rect1.isSquare())cout << "���簢���̴�." << endl;
	if (rect2.isSquare())cout << "���簢���̴�." << endl;
	if (rect3.isSquare())cout << "���簢���̴�." << endl;
	return 0;
}

