#include <iostream>
using namespace std;

class Vehicle
{
private:
    void piston()
    {
        cout << "4 piston\n";
    }

    void manWhoMade()
    {
        cout << "Elon musk\n";
    }

public:
    void company()
    {
        cout << "TESLA\n";
    }
    void model()
    {
        cout << "2024\n";
    }
    void color()
    {
        cout << "Red/GREEN/Silver\n";
    }
    void cost()
    {
        cout << "Rs. 60000 to 900000\n";
    }
    void oil()
    {
        cout << "ELECTRIC\n";
    }
};
int main()
{

    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}
return 0;
