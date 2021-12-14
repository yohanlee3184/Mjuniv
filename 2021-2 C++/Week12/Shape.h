#pragma once
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape();
	~Shape();
	void paint();
	Shape* add(Shape* p);
	Shape* getNext();
};
#endif