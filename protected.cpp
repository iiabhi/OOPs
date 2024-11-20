#include<iostream>
using namespace std;

class base{
    public:
    int c;
    protected:
    int a;
    private:
    int b;

};

class derived : public base{ 

};

class derived1 : protected base{

};



int main()
{
    base b1;
    // b1.a; //protected member can't be accessed by outside functions, it can only be inherited.

    derived d;
    // d.a; //Can't be accesed as it will remain protected for derived class even if the visibility mode is public.

    d.c; //can be accessed as it will be the public member of base class and public member of derived class too.

    derived1 d1;

    // d1.a; //Can't be accessed as protected member of base class will be protected for derived class  in protected visibility mode.

    // d1.c; //Can't be accessed as public member of base class will be protected for derived class  in protected visibility mode.



 return 0;
}