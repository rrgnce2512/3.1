#include "Circle.h"

using namespace std;

Point Circle::getCentr()
{
	return center;
}

void Circle::setCentr(const Point c)
{
	center = c;
}

double Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(double r)
{
	radius = r;
}

Circle::Circle()
{
	center = Point();
	radius = 1;
}

Circle::Circle(Point a, int r)
{
	center = a;
	radius = r;
}

Circle::Circle(double x1, double y1, int r)
{
	center = Point(x1, y1);
	radius = r;
}

Circle::Circle(const Circle& t)
{
	center = t.center;
	radius = t.radius;
}

Circle::~Circle()
{
}

void Circle::print()
{
	cout << "Center: [" << center.getX() << ", " << center.getY() << "] " << "Radius = " << radius << endl;
}

double Circle::Perimetr() {
	return 2 * 3.14 * radius;
}

double Circle::Square()
{
	return 3.14 * radius * radius;
}

