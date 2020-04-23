#include <iostream>
#include <math.h>

#include "point.h"


using namespace std;

double Point::getX() {
	return x;
}
double Point::getY() {
	return y;
}

void Point::setX(double X) {
	x = X;
}
void Point::setY(double Y) {
	y = Y;
}

Point::Point() {
	setX(0);
	setY(0);
}

Point::Point(double x, double y) {
	setX(x);
	setY(y);
}

Point::Point(const Point& a) {
	setX(a.x);
	setY(a.y);
}

void Point::Print() {
	cout << getX() << ' ' << getY() << endl;
}

double Point::dist(const Point& b) {
	return sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
}

bool Point::operator==(const Point& b)
{
	if (x == b.x && y == b.y) {
		return true;
	}
	else {
		return false;
	}
}

const Point Point::operator+(const Point& b) const
{
	return Point(x + b.x, y + b.y);
}

const Point Point::operator-(const Point& b) const
{
	return Point(x - b.x, y - b.y);
}

Point& Point::operator+=(const Point& b)
{
	x += b.x;
	return *this;
}

Point& Point::operator-=(const Point& b) 
{
	x -= b.x;
	return *this;
}

Point& Point::operator*=(double c) 
{
	x *= c;
	y *= c;
	return *this;
}

Point& Point::operator/=(double c) 
{
	if (c != 0) {
		x /= c;
		y /= c;
	}
	else {
		throw exception("Error");
	}
	return *this;
}


Point::~Point() {	
}

std::ostream& operator<< (std::ostream& out, Point& c) {
	out << c.getX() << ' ' << c.getY();
	return out;
}

std::istream& operator>>(std::istream& in, Point& c)
{
	in >> c.x;
	in >> c.y;
	return in;
}
