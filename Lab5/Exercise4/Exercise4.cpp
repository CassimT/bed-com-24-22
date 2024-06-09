#include <iostream> 
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int num = 0;
	cout << "Enter an interger value between 5 and 10: " <<endl;
	while(true) {
		cout << ": ";
		cin >> num;
		if(cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout <<"Sorry you have entered an invalide number please try again." << endl;
			continue;
		}
		if(num > 5 && num < 10) {
			cout << "you value ("<< num <<") is Accepted" <<endl;
			break;
		} else {
			cout << "you have entere ("<< num <<") plesae enter a numnber between 5 and 10" <<endl;
		}
	
		num ++;
	}
	return 0;
}