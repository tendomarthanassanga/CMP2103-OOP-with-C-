#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand;
    int speed;

    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class
class Bus : public Vehicle
{
public:
    int capacity;

    void displayBus()
    {
        cout << "Passenger Capacity: "
             << capacity << endl;
    }
};

// Further derived class
class SchoolBus : public Bus
{
public:
    string schoolName;

    void displaySchoolBus()
    {
        cout << "School Name: "
             << schoolName << endl;
    }
};

int main()
{
    SchoolBus bus;

    // Inherited from Vehicle
    bus.brand = "Toyota";
    bus.speed = 80;

    // Defined in Bus
    bus.capacity = 40;

    // Defined in SchoolBus
    bus.schoolName = "Green Valley School";

    cout << "SCHOOL BUS DETAILS" << endl;

    bus.displayVehicle();
    bus.displayBus();
    bus.displaySchoolBus();

    return 0;
}
