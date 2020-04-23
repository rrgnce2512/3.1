#pragma once
#include "Figure.h"

class Circle :
	public Figure
{

private:
	Point center;
	double radius;
public:
	Point getCentr();
	void setCentr(Point c);
	double getRadius();
	void setRadius(double r);

	Circle();
	Circle(Point a, int r);
	Circle(double x1, double y1, int r);
	Circle(const Circle& t);


	~Circle();

	void print();

	double Perimetr();
	double Square();
};

