#include <iostream>
using namespace std;

class Base
{
public:
    int varBase;
    void display(void)
    {
        cout << "Base Variable:" << varBase << endl;
        cout << "Base display function Invoked" << endl;
    }
};
class Derived : public Base
{
public:
    int varDerived;
    void display(void)
    {
        cout << "Derived  Variable:" << varDerived << endl;
        cout << " Derived display function Invoked" << endl;
    }
};

int main()
{
    Base objBase;
    Derived objDerived;

    Base *basePointer;
    Derived *derivedPointer;

    // basePointer = &objBase; //valid

    basePointer = &objDerived; //valid

    basePointer->varBase = 99;
    basePointer->display();

    // derivedPointer = &objBase; //not valid

    derivedPointer = &objDerived; //valid

    derivedPointer -> varDerived = 1010;
    derivedPointer->display(); //derived display function called

    derivedPointer -> varBase = 1009; //this line will only get executed when line 35 exists, otherwise this line donesn't do anything.
    basePointer->display();

    // basePointer-> varDerived = 20; //not valid




    return 0;
}