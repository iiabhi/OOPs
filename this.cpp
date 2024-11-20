#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // void setData(int a){
    //      a = a; //throw garbage value
    // }
    void setData(int a)
    {
        this->a = a;
    }
    void getData(void)
    {
        cout << a << endl;
    }
};
int main()
{
    A ab;
    ab.setData(4);
    ab.getData();
    return 0;
}