#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"
#include <limits>

using namespace std;
using namespace shapes;

//function declaration
void square();
void triangle();
void circle();

int main(int argc, char const *argv[])
{
	/* code */
	int option;
	
	while(true) {
		cout << "1.Calculate the area of a square" << endl;
		cout << "2.Calculate the area of triangle" << endl;
		cout << "3.Calculate the area of a circle" << endl;
		cout << "4.Quit \n" << endl;
	
		cout << "Option: ";
		cin >> option;
		if(cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout <<"In valide input.please try again." << endl;
			continue;
		} else if(option == 1) {
			//1.Calculate the area of a square
			square();

		} else if(option == 2) {
			//2.Calculate the area of triangle
			triangle();

		}else if(option == 3) {
			//3.Calculate the area of a circle
			circle();
	

		} else if(option == 4) {
			//4.Quit"
			return 0;

		}else {
			cout <<" Wrong input (Enter option 1 - 4) " << endl;

		}
	
	}

	return 0;
}

/*function definition*/

void square() {
	Square square;
	Area area;
	double length;
	cout <<"Enter length: ";
	cin >> length;
	square.setLength(length);
	cout << "Area: " << area.calculateAreaOfSquare(square) << endl;

}
void triangle() {
	Triangle triangle;
	Area area;
	double base;
	double height;
	cout <<"Enter Base: ";
	cin >> base;
	cout <<"Enter Height: ";
	cin >> height;
	triangle.setBase(base);
	triangle.setHeight(height);
	cout << "Area: " << area.calculateareaOfTriangle(triangle) << endl;

}
void circle() {
	Circle circle;
	Area area;
	double radius;
	cout <<"Enter radius: ";
	cin >> radius;
	circle.setRadius(radius);
	cout << "Area: " << area.calculateAreaOfCircle(circle) << endl;

}