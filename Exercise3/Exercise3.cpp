#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */

	string myArray[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

	for(auto id:myArray)  {
			if(id[0] == 'B') {
				cout << id<< endl;
			}
	}

	return 0;
}