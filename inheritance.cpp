#include <iostream>
using namespace std;

class Employee
{

public:
    int id;
    int salary;
    Employee() {}
    Employee(int data)
    {
        id = data;
        salary = 1000;
    }
    void getData(void)
    {
        cout << id << " and " << salary << endl;
    }
};

class Programmer :public Employee
{
public:
    int language;
    Programmer(int inpId)
    {
        id = inpId;
        salary = 2000;
        language = 9;
    }
};

int main()
{
    Employee e1(10), e2(11);
    e1.getData();
    e2.getData();

    Programmer p1(210), p2(220);
    p1.getData();
    p1.getData();

    return 0;
}