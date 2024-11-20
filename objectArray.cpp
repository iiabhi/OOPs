#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void getId(void);
    void display(void);
};

void Employee ::getId()
{
    salary = 140;
    cout << "enter the id of the employee:" << endl;
    cin >> id;
}

void Employee ::display()
{
    cout << "the id of employee is " << id << "and salary is " << salary << endl;
}

int main()
{
    Employee facebook[100];
    int num;
    cout << "Enter the number of employee you wish to have in the company:" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        facebook[i].getId();
        facebook[i].display();
    }



    return 0;
}