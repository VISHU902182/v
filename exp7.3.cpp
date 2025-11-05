#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

class Fare {
public:
    Fare() { cout << "Fare of Vehicle\n"; }
};

class Car : public Vehicle {
public:
    Car() { cout << "This Vehicle is a Car\n"; }
};

class Bus : public Vehicle, public Fare {
public:
    Bus() { cout << "This Vehicle is a Bus with Fare\n"; }
};

int main() 
{
    cout << "Name -: Vishal choudhari" << endl;
    cout << "Div  -: B" << endl;
    cout << "Roll No -: 89" << endl;
    cout << "-----------------------------" << endl;

    Bus obj2;

    return 0;
}
