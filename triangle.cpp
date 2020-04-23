//
// Created by Arias Arevalo, Carlos on 4/22/20.
//
#include "point.h"
#include "triangle.h"

#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <cassert>

using std::string;
using std::stringstream;
using std::max;

Triangle::Triangle(const Point &a, const Point &b, const Point &c) : _a(a), _b(b), _c(c) {
	assert(a != b && b != c && a != c);

	// vertical line
	assert(!(abs(_a.GetX() - _b.GetX()) < 1e-6 && abs(_c.GetX() - _b.GetX()) < 1e-6));

	if (abs(_a.GetX() - _b.GetX()) < 1e-6){ // Avoid infinite slope
		return;
	}
	if (abs(_c.GetX() - _b.GetX()) < 1e-6){ // Avoid infinite slope
		return;
	}
	double slope1 = ( _a.GetY() - _b.GetY() ) / ( _a.GetX() - _b.GetX() );
	double slope2 = ( _c.GetY() - _b.GetY() ) / ( _c.GetX() - _b.GetX() );
	assert(abs(slope1 - slope2) >= 1e-6); // if two slopes are the same, it's not a triangle
}

string Triangle::ToString() const {
	stringstream retVal;
	retVal << "{Triangle " << Shape::ToString()
		   << " a = " << _a.ToString()
		   << ", b = " << _b.ToString()
		   << ", c = " << _c.ToString()
		   << "}";
	return retVal.str();
}

double Triangle::Area() const {
	double lengthAB = _a.Distance(_b);
	double lengthBC = _b.Distance(_c);
	double lengthAC = _a.Distance(_c);
	double s = (lengthAB + lengthBC + lengthAC) / 2.0;
	return sqrt(s * (s - lengthAB) * (s - lengthBC) * (s - lengthAC));
}

double Triangle::Perimeter() const {
	return _a.Distance(_b) + _b.Distance(_c) + _a.Distance(_c);
}

double Triangle::Hypotenuse() const {
	double lengthAB = _a.Distance(_b);
	double lengthBC = _b.Distance(_c);
	double lengthAC = _a.Distance(_c);
	return max(lengthAB, max(lengthBC, lengthAC));
}
double FindAngle(double oppositeLength, double side1, double side2){
	return acos((pow(side1, 2) + pow(side2, 2) - pow(oppositeLength, 2)) / (2 * side1 * side2));
}
double Triangle::AngleA() const {
	double lengthAB = _a.Distance(_b);
	double lengthBC = _b.Distance(_c);
	double lengthAC = _a.Distance(_c);
	return FindAngle(lengthBC, lengthAB, lengthAC);
}

double Triangle::AngleB() const {
	double lengthAB = _a.Distance(_b);
	double lengthBC = _b.Distance(_c);
	double lengthAC = _a.Distance(_c);
	return FindAngle(lengthAC, lengthAB, lengthBC);
}

double Triangle::AngleC() const {
	double lengthAB = _a.Distance(_b);
	double lengthBC = _b.Distance(_c);
	double lengthAC = _a.Distance(_c);
	return FindAngle(lengthAB, lengthAC, lengthBC);
}

double Triangle::SideAB() const {
	return _a.Distance(_b);
}

double Triangle::SideBC() const {
	return _b.Distance(_c);
}

double Triangle::SideAC() const {
	return _a.Distance(_c);
}
