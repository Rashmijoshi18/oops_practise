#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << name << endl;
        cout << age << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Rashmi";
    s1.age = 20;
    s1.display();
}