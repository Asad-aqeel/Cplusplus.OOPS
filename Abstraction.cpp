#include <iostream>
using namespace std;

class Car
{
    bool startEngine;

public:
    void start()
    {
        startEngine = true;
        cout << "Engine is started. " << endl;
    };

    void drive()
    {

        if (startEngine)
        {
            cout << "You are ready to drive.. ";
        }
        else
        {
            cout << "You can't drive right know.. ";
        }
    };
};

int main()
{
    Car obj;
    obj.start();
    obj.drive();

    return 0;
}
