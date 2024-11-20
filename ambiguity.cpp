#include <iostream>
using namespace std;

class base1
{
public:
    void greet(void)
    {
        cout << "Hey I am the  1st base class" << endl;
    }
};

class base2
{
public:
    void greet(void)
    {
        cout << "Hey I am the  2nd base class" << endl;
    }
};

class derived : public base1, public base2
{
public:
    /* This line of code is need to be written to remove the ambiguity for compiler and execute the code without any error.
    if this code is not written then line 39 can't get executed and will throw an error.
    */

    void greet()
    {
        base1 ::greet();
    }
};

int main()
{

    derived d;
    // d.greet(); This will throw error if line if line 29,30,31,32 is not written.
    d.greet();

    d.base1::greet(); // here we specified the function to be executed in which scope. Even if we don't write line 29,30,31,32, it will still work.
    d.base2::greet();

    return 0;
}