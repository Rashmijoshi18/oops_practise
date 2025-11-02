#include <iostream>
using namespace std;
namespace student
{
    int number = 42;
}
int main()
{
    cout << student::number << endl;
    return 0;
}