#include <iostream>
using namespace std;

class B
{
public:
    void say(void)
    {
        cout << "I am B." << endl;
    }
};

class C : public B
{
public:
    void say(void)
    {
        cout << "I am c." << endl;
    }
};
int main()
{
    C obj;
    obj.say(); //"I am c" is printed as say function in derived class is executed, the fn of derived class override the function of base class.

    obj.B::say(); //"I am B" is printed as here we used the scope resolution operator indicating that say function executeable is in scope of B.
    return 0;
}