#include "person.h"
#include <iostream>
Person::Person() {
    mWeight = 0;
    mFirstName = "";
    mAge = 0;
}
Person::Person(float newWeight) {
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}
Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}
Person::operator int() {
    return mAge;
}
 string Person::exampleUsage() {
    string janeFirstName = static_cast<string>(*this); 
    cout<< "Jane's First Name: " << janeFirstName << endl;

    int janeAge = static_cast<int>(*this); 
    cout << "Jane's Age: " << janeAge << endl;

    float janeWeight = static_cast<float>(*this);
    cout << "Jane's Weight: " << janeWeight << endl;
}
