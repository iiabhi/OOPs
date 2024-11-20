#include <iostream>
using namespace std;

class complex;

class calculator{
    public:
    int sum(int a,int b){
        return a+b;
    }
    complex sumComplex(complex o1,complex o2);
};

class complex
{
    int a;
    int b;
    friend complex calculator::sumComplex(complex o1,complex o2);
public:
    int getData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void display(void);
};

complex calculator :: sumComplex(complex o1,complex o2){
        complex c3;
        c3.a = o1.a+ o2.a;
        c3.b = o1.b + o2.b;
        return c3;
    }

void complex :: display(){
    cout<<"The number is:"<<a<<"+"<<b<<"i"<<endl; 
}



int main()
{
    complex c1,c2,newComplex;
    calculator calc;

    c1.getData(1,2);
    c1.display();

    c2.getData(3,7);
    c2.display();

    newComplex = calc.sumComplex(c1,c2);
    newComplex.display();


    return 0;
}