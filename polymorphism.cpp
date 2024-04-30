#include <iostream>
using namespace std;

class Polymorphism
{
public:
    // If function is same and variables are also same then data type must be different...
    // If data types are same then variables must be different....

    void func(int x)
    {
        cout << "Value of x is " << x << "." << endl;
    }

    void func(double x)
    {
        cout << "Value of x is " << x << "." << endl;
    }

    void func(int x, int y)
    {
        cout << "Value of x and y is " << x << ", " << y <<"." << endl;
    }
};

int main()
{
    Polymorphism obj1;

    obj1.func(100);

    obj1.func(500);

    obj1.func(600,200);
    return 0;
}
