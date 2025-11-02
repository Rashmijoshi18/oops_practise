#include <iostream>
using namespace std;
union Student
{
public:
    int age;
    int marks;
    void displayage()
    {
        cout << age;
    }
    void displaymarks()
    {
        cout << marks;
    }
};
int main()
{
    Student s1;
    s1.age = 20;
    s1.displayage();
    s1.marks = 29;
    s1.displaymarks();
}