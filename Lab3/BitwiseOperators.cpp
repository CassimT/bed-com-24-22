#include <iostream>
using namespace std;

main () {
unsigned int a = 60;
unsigned int b = 13;
int c = 0;

c = a & b;
cout << "Line 1 - Value of c is : " << c << endl;

// 61 = 0011 1101
cout << "Line 2 - Value of c is: " << c << endl;

// 49 = 0011 0001
cout << "Line 3 - Value of c is: " << c << endl;

// -61 = 1100 0011
cout << "Line 4 - Value of c is: " << c << endl;

// 240 = 1111 0000
cout << "Line 5 - Value of c is: " << c << endl;

// 15 = 0000 1111
cout << "Line 6 - Value of c is: " << c << endl;

return 0;

c = a >> 2;
}