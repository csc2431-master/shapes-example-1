//
// Created by Arias Arevalo, Carlos on 4/22/20.
//

#include "point.h"
#include "ellipse.h"
#include "circle.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Circle::Circle(const Point &center, double radius): Ellipse(center, radius, radius) {

}

string Circle::ToString() const {
	stringstream retVal;
	retVal << "{Circle " << Ellipse::ToString() << "}";
	return retVal.str();
}

double Circle::Perimeter() const {
	return 2 * PI * PI; // We are in trouble!
}
