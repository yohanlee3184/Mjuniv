#include<iostream>

using namespace std;

class Rectangle {

	int width, height;

public:

	Rectangle();
	Rectangle(int a);
	Rectangle(int a, int b);

	int isSquare();
};

Rectangle::Rectangle()
	:Rectangle(1, 1) {}

Rectangle::Rectangle(int a)
	: width(a), height(a) {}

Rectangle::Rectangle(int a, int b)
	: width(a), height(b) {}

int Rectangle::isSquare() {
	if (height == width)return 1;
	else return 0;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare())cout << "rect1 은 정사각형이다." << endl;
	if (rect2.isSquare())cout << "rect2 는 정사각형이다." << endl;
	if (rect3.isSquare())cout << "rect3 는 정사각형이다." << endl;

	return 0;
}