#include <iostream>
using namespace std;
class student
{
public:
    string object;
    student(string o)
    {
        object = o;
        cout << "Object " << object << " is created" << endl;
    }
    ~student()
    {
        cout << "Object  " << object << " is destroyed" << endl;
    }
};
int main()
{
    student s1("A");
    student s2("B");
    return 0;
}