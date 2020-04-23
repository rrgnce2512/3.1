#pragma once
#include "Figure.h"

using namespace std;

class Triangle :
	public Figure
{
private:
	Point a, b, c;
public:
	Triangle();
	Triangle(Point q, Point w, Point e);
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	Triangle(const Triangle& t);
	
	~Triangle();

	void setA(const Point A);
	void setB(const Point B);
	void setC(const Point C);

	Point getA();
	Point getB();
	Point getC();



	void print();

	double Perimetr();
	double Square();

};

