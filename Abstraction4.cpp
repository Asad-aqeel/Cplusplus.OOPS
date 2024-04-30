#include <iostream>
using namespace std;

class sum
{

private:
    int number1, number2, result;

public:
    void add()
    {

        cout << "Enter two numbers: " << endl;
        cin >> number1 >> number2;

        result = number1 + number2;

        cout << "The result of adding two integers is " << result << "." << endl;
    };
};

int main()
{

    sum obj;
    obj.add();
    return 0;
}
