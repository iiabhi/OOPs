#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;

public:
    complex(void); //default constructor(no arguements).
    void display(void);
};

complex ::complex(void)
{
    real = 10;
    imag = 20;
    cout<<"hello world"<<endl; //it will get printed as when object is created constructor is automatically invoked.
}

void complex :: display(){
    cout<<real<<endl;
    cout<<imag<<endl;
}

int main()
{
    complex c1;
    c1.display();
    return 0;
}