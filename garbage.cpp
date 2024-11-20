#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        a = a;
    }
    void getData(void)
    {
        cout << a << endl;
    }
};

int main()
{
    A abhi;
    abhi.setData(4);
    abhi.getData();
    return 0;
}