#include "person.h"
#include <iostream>
using namespace std;

int main() {

    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);


    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight <<endl;
    if (Jane == John) {
        cout << "This is the same person" << endl;
    }

    if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }

    if (static_cast<int>(Jane) < static_cast<int>(John)) {
        cout << "Jane is younger than John" << endl;
    }

    if (static_cast<int>(John) > static_cast<int>(Jane)) {
        cout << "John is older than Jane" << endl;
    }

    int johnAge = static_cast<int>(John);
    cout << "John's Age: " << johnAge << endl;

    return 0;
}
