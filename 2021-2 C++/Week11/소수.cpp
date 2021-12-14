/*#include<iostream>
using namespace std;

class Shape {

public:
	void paint() { this->draw(); }

protected:
 void draw() {

		cout << "Shape::draw() called" << endl;

	}
};
class Circle :public Shape {
public:
void draw() {

		cout << "Cirlce::draw() called" << endl;

	}

};

class Rect :public Shape {
public:
void draw() {

		cout << "Rect::draw() called" << endl;

	}


};

class Line :public Shape {
public:
	 void draw() {

		cout << "Line::draw() called" << endl;

	}

};

int main_01() {

	Shape* pShape = NULL;
	pShape = new Circle();
	pShape->paint();
	Circle* pCircle = (Circle*)pShape;
	pCircle->draw();
	delete pShape;

	pShape = new Rect();
	pShape->paint();
	Rect* pRect = (Rect*)pShape;
	pRect->draw();
	delete pShape;

	pShape = new Line();
	pShape->paint();
	Line* pLine = (Line*)pShape;
	pLine->draw();
	delete pShape;

	return 0;
}*/