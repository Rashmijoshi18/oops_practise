#include <iostream>
using namespace std;

int add(int a, int b)
{ // returns int
    return a + b;
}

double add(double a, double b)
{ // returns double
    return a + b;
}

int add(int a, int b, int c)
{ // returns int
    return a + b + c;
}

int main()
{
    cout << add(2, 3) << endl;
    cout << add(2.3, 3.5) << endl;
    cout << add(1, 2, 3) << endl;
}
