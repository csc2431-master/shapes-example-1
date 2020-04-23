#include "point.h"
#include "triangle.h"

#include <iostream>
using std::cout;
using std::endl;

void PrintTriangleData(const Triangle& triangle);

int main() {
	Triangle t1({0,0}, {0,4}, {3,0});
	PrintTriangleData(t1);

	Triangle t2({1,1}, {2,2}, {3, 3});

	return 0;
}
void PrintTriangleData(const Triangle& triangle){
	cout << triangle.ToString() << endl;
	cout << triangle.Area() << endl;
	cout << triangle.Perimeter() << endl;
	cout << triangle.SideAB() << "\t" << triangle.SideBC() << "\t" << triangle.SideAC() << endl;
	cout << triangle.AngleA() << "\t" << triangle.AngleB() << "\t" << triangle.AngleC() << endl;
	cout << endl;
}
