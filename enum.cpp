#include <iostream>
#include <string>
using namespace std;

enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    int input;
    cin >> input;

    Day today;

    if (input == 1)
    {
        today = Monday;
        cout << "Monday" << endl;
    }
    else if (input == 2)
    {
        today = Tuesday;
        cout << "Tuesday" << endl;
    }
    else if (input == 3)
    {
        today = Wednesday;
        cout << "Wednesday" << endl;
    }
    else if (input == 4)
    {
        today = Thursday;
        cout << "Thursday" << endl;
    }
    else if (input == 5)
    {
        today = Friday;
        cout << "Friday" << endl;
    }
    else if (input == 6)
    {
        today = Saturday;
        cout << "Saturday" << endl;
    }
    else if (input == 7)
    {
        today = Sunday;
        cout << "Sunday" << endl;
    }
    else
    {
        cout << "Invalid day!" << endl;
        return 0;
    }

    // Optional: weekend or weekday check
    // if (today == Saturday || today == Sunday)
    //     cout << "It's weekend!" << endl;
    // else
    //     cout << "It's a weekday." << endl;
}
