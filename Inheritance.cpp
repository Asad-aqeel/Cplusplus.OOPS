#include <iostream>
#include <string>
using namespace std;

// We use property of one class into another class,if requirement is same..
// Enhance code re-ues-ability.....

// Classes.......

class father
{
protected:
    string fathername = "Aqeel";
};

class Son1 : father
{
    string name = "Asad";

    // Methods....

public:
    void show()
    {

        cout << name << " " << fathername << "." << endl;
    };
};

class Son2 : father
{

    string name = "Ahmer";

    // Methods....

public:
    void display()
    {

        cout << name << " " << fathername << "." << endl;
    };
};

class Son3 : father
{

    string name = "Umer";

    // Methods....

public:
    void set()
    {

        cout << name << " " << fathername << "." << endl;
    };
};

int main()
{

    // Objects.......
    Son1 obj;
    obj.show();
    Son2 obj2;
    obj2.display();
    Son3 obj3;
    obj3.set();

    return 0;
}
