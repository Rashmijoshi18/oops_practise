#include <bits/stdc++.h>
using namespace std;
int main()
{
    float num = 12.3456;
    // setprecision manipulator
    // Used to set the number of digits to be displayed after the decimal point for floating point
    cout << setprecision(2) << num << endl;
    cout << fixed << setprecision(2) << num << endl;
    // setwidth manipulator
    // Used to set the minimum number of spaces for the next output item
    cout << setw(10) << 25 << endl;
    cout << setw(10) << 1000 << endl;
    // setfill manipulator
    // Used to set the fill character for the empty spaces when the width is more than the actual number
    cout << setfill('*') << setw(10) << 25 << endl;
    cout << setfill('#') << setw(10) << 1000 << endl;
    // Example of reading a full line including spaces
    string name;
    getline(cin >> ws, name);
    // ignores spaces before the actual name
    cout << "Hello, " << name;
}
