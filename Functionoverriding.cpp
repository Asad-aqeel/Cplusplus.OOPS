#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {

        cout << "It's base class. " << endl;
    };
};

class B : public A
{
public:
    void func()
    {

        cout << "It's derive class. " << endl;
    };
};

int main()
{
    B obj;
    obj.A::func();

    return 0;
}
