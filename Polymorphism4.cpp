#include <iostream>
using namespace std;

// Run-time polymorphsim...

class A
{
public:
   void show()
    {
        cout << "It's class A." << endl;
    };
};

class B : public A
{
public:
    void show()
    {

        cout << "It's class B." << endl;
    };
};

int main()
{
    A *Pointer;
    B obj;
    Pointer = &obj;
    Pointer->show();

    return 0;
}
