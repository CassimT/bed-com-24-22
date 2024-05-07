#include <iostream>
#include "rectangle.h"

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	float width;
	float height;

	Rectangle rec;


	cout <<"Enter Rectangle dimensions" <<endl;
	cout <<"Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;


	rec.setWidth(width);
	rec.setHeight(height);

	cout <<"Area of the rectangle: " << rec.area() << endl;

	//area from the constractor value
	Rectangle obj(width,height);
	cout <<"Area of the rectangle: " << obj.area() << endl;



	//setting width
	return 0;
}