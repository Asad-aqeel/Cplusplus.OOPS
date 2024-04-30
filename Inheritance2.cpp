#include <iostream>
using namespace std;

class A
{
public:
    void call()
    {

        cout << "Its A claas. ";
    }
};

class B : public A
{

public:
    void call()
    {

        cout << "Its B claas. ";
    };
};

class C : public B
{
};
int main()
{
    C c;
    c.call();

    return 0;
}
