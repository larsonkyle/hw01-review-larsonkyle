#include "circle.h"
#include <iostream>

int main() {
	double x1 = 65.23,
	       x2 = 54.54;

	double y1 = 3.86,
	       y2 = 5;

	std::cout << "Distance: " << distance(x1,y1,x2,y2) << std::endl;
	std::cout << "Radius: "   << radius(x1,y1,x2,y2) << std::endl;
	std::cout << "Circumference: " << circumference(radius(x1,y1,x2,y2)) << std::endl;
	std::cout << "Area: " << area(radius(x1,y1,x2,y2)) << std::endl;
	return 0;
}
