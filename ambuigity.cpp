#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "ths is class A ";
    }
};

class B
{
public:
    void show()
    {
        cout << "this is class B";
    }
};
class C : public A, public B
{
};
int main()
{
    C obj;
    obj.A::show();
    obj.B::show();
    return 0;
}