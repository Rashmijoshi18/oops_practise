#include <iostream>
using namespace std;
struct Student
{
public:
    int age;

    int marks;

    void display()
    {
        cout << age;
        cout << marks;
    }
};
int main()
{
    Student s1;
    s1.age = 20;
    s1.marks = 29;
    s1.display();
}