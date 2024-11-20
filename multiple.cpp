#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void setbase1int(int x)
    {
        base1int = x;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setbase2int(int y)
    {
        base2int = y;
    }
};

class derived : public base1, public base2
{
protected:
    int derivedInt;

public:
    void show(void)
    {
        derivedInt = base2int + base1int;
        cout << base1int << endl;
        cout << base2int << endl;
        cout << derivedInt << endl;
    }
};

int main()
{
    derived d;
    d.setbase1int(1);
    d.setbase2int(2);
    d.show();
    return 0;
}