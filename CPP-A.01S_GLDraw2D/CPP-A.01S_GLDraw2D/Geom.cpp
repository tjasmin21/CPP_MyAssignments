#include <iostream>
using namespace std;

#include "Geom.h"


// Provide implementation for the first method
void CPoint::set(float x1, float y1)
{
	x = x1;
	y = y1;
}

void CPoint::list()
{
	cout << "CPoint : " << "Px=" << x << " Py=" << y << endl;
}

void CLine::set(float x1, float y1, float x2, float y2)
{
	c1.set(x1, y1);
	c2.set(x2, y2);
}

void CLine::list()
{
	cout << "CLine : " << endl;
	c1.list();
	c2.list();
	cout << endl;

	//cout << ""CLine : "" << c1.list() << c2.list() << endl;
}

void CRectangle::set(float x1, float y1, float x2, float y2)
{
	c1.set(x1, y1);
	c2.set(x2, y2);
}

void CRectangle::list()
{
	cout << "CRectangle : " << endl;
	c1.list();
	c2.list();
	cout << endl;

	//cout << ""CRectangle : "" << c1.list() << c2.list() << endl;
}

void CCircle::set(float x1, float y1, float r1)
{
	c1.set(x1, y1);
	r = r1;
}

void CCircle::list()
{
	cout << "CCircle : " << endl;
	c1.list();
	cout << "r=" << r << endl;
}