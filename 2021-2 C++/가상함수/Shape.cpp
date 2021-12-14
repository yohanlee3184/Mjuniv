#include<iostream>
#include"Shape.h"
using namespace std;

Shape::Shape() {
	next = NULL;
	cout << "Shape() called" << endl;
}
Shape::~Shape() {
	cout << "~Shape() called" << endl;
}
void Shape::paint() {
	draw();
}
Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}
Shape* Shape::getNext() {
	return this->next;
}