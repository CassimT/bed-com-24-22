#include "area.h"
#include "square.h"

//Calculate the area of a square
double Area::calculateAreaOfSquare(const shapes::Square& square) { // Corrected function definition
    double length = square.getLength();
    return length * length; // Return the calculated area
}
//Calculate the area of a triangle
double Area::calculateareaOfTriangle(const shapes::Triangle &triangle) {
	double base = tringle.getBase();
	double height = tringle.getHeight();

	return 0.5 * base * height;

}
//Calculate the area of a circle
double Area::calculateAreaOfCircle(const shapes::Circle &circle) {
	const double PI = 3.14;
	double radius = circle.getRadius();

	return PI * radius * radius;
}