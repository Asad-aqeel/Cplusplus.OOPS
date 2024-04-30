#include <iostream>
using namespace std;

// Compile time-polymorphism..

void show(int age)
{

    cout << age << endl;
};

void show(string name)
{

    cout << name << endl;
};

void show(double salary)
{
    cout << salary << endl;
};

int main()
{

    show(19);
    show("ASAD");
    show(100000);

    return 0;
}
