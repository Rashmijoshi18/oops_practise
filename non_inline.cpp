#include <iostream>
using namespace std;
void display(string name)
{
    cout << "hello world I am" << name << endl;
}
int main()
{
    string name;
    cin >> name;
    display(name);
}