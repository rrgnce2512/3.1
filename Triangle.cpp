#include "Triangle.h"

Triangle::Triangle() {
	a = Point(0, 0);
	b = Point(0, 1);
	c = Point(1, 0);
}
Triangle::Triangle(const Point A, const Point B, const Point C) {
	a = A;
	b = B;
	c = C;
}
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	a = Point(x1, y1);
	b = Point(x2, y2);
	c = Point(x3, y3);
}
Triangle::Triangle(const Triangle& t)
{
	a = t.a;
	b = t.b;
	c = t.c;
}

double Triangle::Perimetr() {
	return a.dist(b) + b.dist(c) + c.dist(a);
}

double Triangle::Square() {
	return abs((b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX())) / 2;
}

Triangle::~Triangle()
{
}

void Triangle::setA(const Point A)
{
	a = A;
}
void Triangle::setB(const Point B)
{
	b = B;
}
void Triangle::setC(const Point C)
{
	c = C;
}

Point Triangle::getA()
{
	return a;
}
Point Triangle::getB()
{
	return b;
}
Point Triangle::getC()
{
	return c;
}

void Triangle::print()
{
	cout << "Triangle [" << a.getX() << ", " << a.getY() << "], [" << b.getX() << ", " << b.getY() << "] , [" << c.getX() << ", " << c.getY() << "]" << endl;

}


