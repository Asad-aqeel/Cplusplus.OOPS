#include <iostream>
using namespace std;

class Members
{

private:
    int a, b;

public:
    void set(int input)
    {

        a = input;
        b = a / 2;
        cout << "The result is " << b << ".";
    };
};

int main()
{

    Members value;
    value.set(6);

    return 0;
}
