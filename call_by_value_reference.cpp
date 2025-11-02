#include <iostream>
using namespace std;

void byValue(int a)
{
    a = 50;
}

void byReference(int &b)
{
    b = 100;
}

int main()
{
    int num = 10;

    byValue(num);
    cout << "After call by value: " << num << endl;

    byReference(num);
    cout << "After call by reference: " << num << endl;
}
