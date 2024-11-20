#include <iostream>
using namespace std;

class Base
{
    int num;

public:
    Base(void) {}
    Base(int num)
    {
        this->num = num;
    }
    void getdData(void)
    {
        cout << num << endl;
    }
    //casting operator function
    operator int()
    {
        return num;
    }
};

int main()
{
    Base b(2);
    int x = b;
    cout << x;

    return 0;
}