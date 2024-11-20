#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base 1 constructor called" << endl;
    }
    void printData1(void)
    {
        cout << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int b)
    {
        data2 = b;
        cout << "Base 2 constructor called" << endl;
    }
    void printData2(void)
    {
        cout << data2 << endl;
    }
};


/*
Class Constructor priority when object is created of derived class:
 
First priority--> Virtual base class
Seond priority--> Non virtual base class (In order of their declaration)
Third Priority--> Derived class

*/
class derived : public Base2,virtual public Base1
{
    int derived1;

public:
    derived(int a,int b, int c): Base1(a),Base2(b){
        derived1 = c;
        cout<<"Derived constructor called"<<endl;
    }
    void printDerivedData(void)
    {
        cout << derived1 << endl;
    }
};

int
main()
{
    derived abhi(1,2,3);
    


    return 0;
}