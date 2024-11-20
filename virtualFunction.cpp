#include <iostream>
using namespace std;

class Base
{
public:
    int varBase = 1;
    virtual void display(void)
    {
        cout << "Base Variable:" << varBase << endl;
        cout << "Base display function Invoked" << endl;
    }
};
class Derived : public Base
{
public:
    int varDerived = 2;
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

    basePointer = &objDerived;
    derivedPointer = &objDerived;

    // basePointer->varDerived=2; //we can't do this.

    basePointer->display(); // derived display function is called as virtual function is used.

    
    

    derivedPointer->display(); // this line runs due to presence of line 35

    return 0;
}