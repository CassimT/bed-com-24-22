#include <iostream>
#include <limits>

using namespace std;
double areaOfRec(double width, double height);
double areaOfSqure(double width);
double areaOfTri(double base, double height);
//void getValues();

int main()
{
	/* code */
	cout << "Pleas select the area of the shape your want to calculate" << endl;
	double num;
	double width;
	double height;
	double base;

	cout << "1. Area of a Triangle" << endl;
	cout << "2. Area of a Rectangle" << endl;
	cout << "3. Area of a squre" << endl;
	cout << "4. Quit the program" << endl;
	cout << "Enter selection: ";
	cin >> num;


	if(num == 1) {
		//selection 1 area of the triangle
		triangle:
		cout <<"Enter the Base: \n";
		cin >> base;
		cout <<"Enter the height: \n";
		cin >> height;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout <<"Wrong input pease try again" << endl;
			goto triangle;
		}
		if( width > 0 && height > 0) {
			cout <<"The area of The Triangle = " << areaOfTri(base,height) <<endl;
			main();
		
		} else {
			cout <<"Rwong input pease try again" << endl;
			goto triangle;
			
		}

	}else if(num == 2)  {
		//selection 3 area of the squre
		rec:
		cout <<"Enter the base: \n";
		cin >> base;
		cout <<"Enter the height: \n";
		cin >> height;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout <<"Wrong input pease try again" << endl;
			goto rec;
		}
		if( base > 0 && height > 0) {
			cout <<"The area of The Triangle = " << areaOfTri(base,height) <<endl;
			main();
		
		} else {
			cout <<"Rwong input pease try again" << endl;
			goto rec;
			
		}

	}else if(num == 3)  {
		//selection 3 area of the squre
		square:
		cout <<"Enter the width: \n";
		cin >> width;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout <<"Wrong input please try again" << endl;
			goto square;
		}
		if( width > 0 && height > 0) {
			cout <<"The area of The Square = " << areaOfSqure(width) <<endl;
			main();
		
		} else {
			cout <<"Wrong input please try again" << endl;
			goto square;
			
		}

	}else if(num == 4) {
		// selection 4 closing the program
		return 0;
	}else {
		cout <<"Wrong input please try again" << endl;
		
	}
			
	return 0;
}

//function difinitions
// area of rectangle
double areaOfRec(double width, double height) {
	double  area = 0;
	area = width * height;

	return area;
}

//area of the squere
double areaOfTri(double base, double height) {
	double area;

	area = 0.5 * base * height;

	return area;

}

//area of the square
double areaOfSqure(double width) {
	double area;
	area = width * width;

	return area;

}
//geting the values
