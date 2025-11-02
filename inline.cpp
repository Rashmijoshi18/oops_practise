#include <iostream>
using namespace std;
inline void display(string name)
{
    cout << "hello world" << name << endl;
}
int main()
{
    string name;
    cin >> name;
    display(name);
}