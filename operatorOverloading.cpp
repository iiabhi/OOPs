#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;

public:
    complex() {}
    complex(int a, int b) : real(a), imag(b)
    {
        cout << "Constructor called" << endl;
    }
    void display(void)
    {
        cout << real << "+" << imag << "i" << endl;
    }

    // operator overloading function
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void operator++(int){
        real = real + 1;
        imag = imag + 1;
        
    }
};

int main()
{
    complex c1(2, 9), c2(5, 1);
    c1.display();
    c2.display();
    complex c3;

    c3 = c1 + c2; //operator overloading application
    c3.display();
    complex c4;
    c4 = c1+c2+c3;
    c4.display();
 c4++;

   
    c4.display();

    return 0;
}