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
    s1.name;
    cin >> s1.name;
    s1.age;
    cin >> s1.age;
    s1.display();
}