#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollno;
    string name;
    string section;

    void show()
    {

        cout << "The name of student is " << name <<"." << endl;
        cout << "The rollno of student is " << rollno <<"." << endl;
        cout << "The section  of student is " << section <<"." << endl;
    };
};

int main()
{

    Student data;
    data.name = "asad";
    data.rollno = 7;
    data.section = "Blue";
    data.show();

    return 0;
}
