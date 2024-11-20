#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j): a(i+b),b(j+a)
    {
        
        cout << "Constructor called" << endl;
        cout << a << " and " << b << endl;
    }
};
int main()
{
    Test t(2,3);
    return 0;
}