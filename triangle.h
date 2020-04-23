//
// Created by Arias Arevalo, Carlos on 4/22/20.
//

#ifndef SHAPES_EXAMPLE_1_TRIANGLE_H
#define SHAPES_EXAMPLE_1_TRIANGLE_H

#include "point.h"
#include "shape.h"

#include <string>
using std::string;

class Triangle : public Shape{
	Point _a, _b, _c;
public:
	Triangle(const Point& a, const Point& b, const Point& c);
	virtual string ToString()const;
	virtual double Area()const;
	virtual double Perimeter()const;
	virtual double Hypotenuse()const;
	virtual double AngleA()const;
	virtual double AngleB()const;
	virtual double AngleC()const;
	virtual double SideAB()const;
	virtual double SideBC()const;
	virtual double SideAC()const;
};


#endif //SHAPES_EXAMPLE_1_TRIANGLE_H
