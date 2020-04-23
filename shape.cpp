//
// Created by Arias Arevalo, Carlos on 4/22/20.
//

#include "shape.h"

#include <string>

using std::string;

Shape::Shape() {

}

string Shape::ToString() const {
	return "{Shape}";
}

double Shape::Area() const {
	return -1.0;
}

double Shape::Perimeter() const {
	return -1.0;
}
