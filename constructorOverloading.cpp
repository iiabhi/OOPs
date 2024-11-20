#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void display()
    {
        cout << a << " and " << b << endl;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(void)
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
};

int main()
{
    complex c1(2, 4);
    c1.display();

    complex c2;
    c2.display();

    complex c3(8);
    c3.display();

    return 0;
}