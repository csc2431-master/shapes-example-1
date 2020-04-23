//
// Created by Arias Arevalo, Carlos on 4/22/20.
//

#ifndef SHAPES_EXAMPLE_1_ISOSCELES_H
#define SHAPES_EXAMPLE_1_ISOSCELES_H

#include "point.h"
#include "triangle.h"

class Isosceles : public Triangle{
public:
	Isosceles(const Point& a, const Point& b, const Point& c);
	virtual string ToString()const;
};


#endif //SHAPES_EXAMPLE_1_ISOSCELES_H
