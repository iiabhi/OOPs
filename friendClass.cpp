#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    int sumRealComplex(complex o1,complex o2);
    int sumImagComplex(complex o1,complex o2);
    
};

class complex
{
    int a;
    int b;

public:
    void getData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    // friend int calculator :: sumRealComplex(complex o1,complex o2);
    // friend int calculator :: sumImagComplex(complex o1,complex o2);

    friend class calculator; 

    void display(void);
};



int calculator :: sumRealComplex(complex o1,complex o2){
    return o1.a+o2.a;

} 
int calculator :: sumImagComplex(complex o1,complex o2){
    return o1.b+o2.b;

} 

void complex ::display()
{
    cout << "The complex number is:" << a << "+" << b << "i" << endl;
}


int main()
{
    complex c1,c2;
    calculator calc;
    int num1,num2;
    c1.getData(1,2);
    c1.display();

    c2.getData(3,7);
    c2.display();

    num1 = calc.sumRealComplex(c1,c2);
    num2 = calc.sumImagComplex(c1,c2);
    cout<<"The real sum is:"<<num1<<endl;
    cout<<"The imaginary sum is:"<<num2<<endl;


    return 0;
}