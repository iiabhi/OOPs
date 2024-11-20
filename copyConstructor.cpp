#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }
    void show(void)
    {
        cout << "the value is : " << a << endl;
    }
    // copy constuctor
    Number(Number &obj)
    {
        cout << "Copy Constructor" << endl;
        ;
        a = obj.a+1;
    }
};

int main()
{
    Number num1, num2(2), num3(4);
    num1.show();
    num2.show();
    num3.show();

    Number num4(num3); // copy constructor evoked
    num4.show();
    num3.show();

    Number num5;
    num5 = num1; // copy constructor not evoked
    num5.show();

    Number num6 = num2; // copy constructor evoked
    num6.show();

    // Number num7 = 10;

    return 0;
}