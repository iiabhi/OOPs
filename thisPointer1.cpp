#include <iostream>
#include <cstring>
using namespace std;

class pntr_obj
{
    int rollNo;
    string name;

public:
    void set_data(void);
    void print(void);
};

void pntr_obj::set_data(void)
{
    cout << "Enter The Roll number" << endl;
    cin >> rollNo;
    cout << endl;
    cout << "Enter the name of the student" << endl;
    cin >> name;
}

void pntr_obj::print(void)
{
    cout << "The Name of the student is:" << this->name << endl;
    cout << "The roll number of the student is " << this->rollNo << endl;
}

int main()
{
    pntr_obj A, B, C;
    A.set_data();

    B.set_data();

    C.set_data();

    A.print();
    B.print();

    C.print();

    return 0;
}