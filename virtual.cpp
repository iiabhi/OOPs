#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor\n";
    }
    void show()
    {
        cout << "Base class show function\n";
    }
};

class Derived1 : virtual public Base
{
public:
    Derived1()
    {
        cout << "Derived1 class constructor\n";
    }
};

class Derived2 : virtual public Base
{
public:
    Derived2()
    {
        cout << "Derived2 class constructor\n";
    }
};
class Derived3 : virtual public Base
{
public:
    Derived3()
    {
        cout << "Derived3 class constructor\n";
    }
};

class DerivedFinal : public Derived1, public Derived2,public Derived3
{
public:
    DerivedFinal()
    {
        cout << "DerivedFinal class constructor\n";
    }
};

int main()
{
    DerivedFinal obj;
    obj.show(); // This will call Base class's show function
    return 0;
}
