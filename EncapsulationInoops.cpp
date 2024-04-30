#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    float salary;
    string name;
    int scale;

public:
    void values(float a, string b, int c)
    {
        salary = a;
        name = b;
        scale = c;

        cout << "The employee salary is " << salary << "." << endl;
        cout << "The employee name is " << name << "." << endl;
        cout << "The employee scale is " << scale << "." << endl;
    };
};

int main()
{

    Employee Data;
    Data.values(100000, "Asad", 17);

    return 0;
}
