#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int *p_number = new int;
	string *p_str = new string;

	int m_number;
	string m_str;

	//promting the user for input
	cout << "Enter a number: ";
	cin >>m_number;
	cout << "Enter a string: ";
	cin >>m_str;

	//asigning values to the dynamicaly allocated valiables
	*p_number = m_number;
	*p_str = m_str;

	//displying the dynamically allocated valiables
	cout << "number = " << *p_number << endl;
	cout << "string = " << *p_str << endl;

	delete p_number;
	delete p_str;
	
	return 0;
}