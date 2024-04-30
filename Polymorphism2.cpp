#include <iostream>
using namespace std;

class Animal
{
public:
    string colour = "Black.";
};

class Dog : public Animal
{
public:
    string colour = "Grey.";
};

int main()
{
    Animal d = Dog();
    cout << d.colour;
}
