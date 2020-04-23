//
// Created by Arias Arevalo, Carlos on 4/22/20.
//

#ifndef SHAPES_EXAMPLE_1_SHAPE_H
#define SHAPES_EXAMPLE_1_SHAPE_H

#include <string>

using std::string;

const double PI = 3.141592653589793238462643383279502884;

class Shape {
public:
	Shape();
	virtual string ToString()const;
	virtual double Area()const;
	virtual double Perimeter()const;
};


#endif //SHAPES_EXAMPLE_1_SHAPE_H
