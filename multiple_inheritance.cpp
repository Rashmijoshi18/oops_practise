#include <iostream>
using namespace std;
class car
{
public:
    car()
    {
        cout << "Car started" << endl;
    }
    ~car()
    {
        cout << "Car stopped" << endl;
    }
    void car_type()
    {
        cout << "type of class";
    }
};
class vehicle : public car
{
public:
    vehicle()
    {
        cout << "this is our vehicle";
    }
    ~vehicle()
    {
        cout << "this is good in condition";
    }
    void vehicle_car()
    {
        cout << "check it";
    }
};
int main()
{
    vehicle v;
    v.car_type();
    v.vehicle_car();
}
