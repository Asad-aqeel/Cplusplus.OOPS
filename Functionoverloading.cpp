#include <iostream>
using namespace std;

class A
{
private:
    int num1 = 20, num2 = 50;

public:
    void function()
    {
        int result = num1 + num2;
        cout << "The addition result is " << result << "." << endl;
    };

    void function(int a, int b)
    {

        int subtract = a - b;
        cout << "The subtraction result is " << subtract << "." << endl;
    };
};

int main()
{
    A obj;
    obj.function(200, 100);
    obj.function();
    return 0;
}
