//
// Created by Arias Arevalo, Carlos on 4/22/20.
//
#include "point.h"
#include "triangle.h"
#include "isosceles.h"

#include <string>
#include <sstream>
#include <cassert>
using std::string;
using std::stringstream;

Isosceles::Isosceles(const Point &a, const Point &b, const Point &c) : Triangle(a, b, c) {
	assert(a.Distance(b) == a.Distance(c) || a.Distance(b) == b.Distance(c));
}

string Isosceles::ToString() const {
	stringstream retVal;
	retVal << "{Isosceles " << Triangle::ToString() << "}";
	return retVal.str();
}
