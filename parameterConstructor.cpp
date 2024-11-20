#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;

public:
    complex(int x, int y); //parameterized constructor
    void display(void){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

complex ::complex(int x, int y)
{
    real = x;
    imag = y;
}

int main()
{
    //Implicit call
    complex c(2,45);

    //Explicit call
    complex d = complex(10,14);
    
    c.display();
    d.display();

    return 0;
}