#include<iostream>
#include<string>
using namespace std;

class Circle {
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircle() { return numOfCircles; }
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}

int Circle::numOfCircles = 0;

int main() {
	Circle* p = new Circle[10];
	cout << Circle::getNumOfCircle()<<endl;
	delete[]p;
	cout << Circle::getNumOfCircle() << endl;

	Circle a;
	cout << Circle::getNumOfCircle() << endl;

	Circle b;
	cout << Circle::getNumOfCircle() << endl;

}
