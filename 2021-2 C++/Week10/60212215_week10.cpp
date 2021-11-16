#include<iostream>
#include<string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint :public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint() {
		cout << color;
		showPoint();
		
	}
};

int main() {

	ColorPoint cp;

	Point* pBase = &cp;
	pBase->set(3, 4);
	pBase->showPoint();

	ColorPoint* pDer = (ColorPoint*)pBase;
	pDer->setColor("Red");
	pDer->showColorPoint();
}
