//
// Created by Arias Arevalo, Carlos on 4/22/20.
//

#ifndef SHAPES_EXAMPLE_1_CIRCLE_H
#define SHAPES_EXAMPLE_1_CIRCLE_H

#include "point.h"
#include "circle.h"


#include <string>
using std::string;

class Circle : public Ellipse{
public:
	Circle(const Point& center, double radius);
	virtual string ToString()const;
	virtual double Perimeter()const;
};


#endif //SHAPES_EXAMPLE_1_CIRCLE_H
