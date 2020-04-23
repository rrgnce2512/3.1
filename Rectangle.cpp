#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
	a = Point(0, 0);
	b = Point(1, 1);
}
Rectangle::Rectangle(const Point A, const Point B) {
	a = A;
	b = B;
}
Rectangle::Rectangle(double x1, double y1, double x2, double y2) {
	a = Point(x1, y1);
	b = Point(x2, y2);
}
Rectangle::Rectangle(const Rectangle& t)
{
	a = t.a;
	b = t.b;
}

Rectangle::~Rectangle()
{
}

void Rectangle::setA(const Point A)
{
	a = A;
}
void Rectangle::setB(const Point B)
{
	b = B;
}

Point Rectangle::getA()
{
	return a;
}
Point Rectangle::getB()
{
	return b;
}
void Rectangle::print()
{
	cout << "Rectangle [" << a.getX() << ", " << a.getY() << "], [" << b.getX() << ", " << b.getY()  << "]" << endl;
}

double Rectangle::Perimetr() {
	return abs(a.getX() - b.getX()) * 2 + (abs(a.getY() - b.getY()) * 2);
}

double Rectangle::Square() {
	return abs(a.getX() - b.getX()) * abs(a.getY() - b.getY());
}