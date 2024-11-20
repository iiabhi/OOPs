#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setData(void);
    int getData1();
    int getData2();
};

void base :: setData(){
    data1 = 10;
    data2 = 20;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

class derived : public base{
    int data3;
    public:
    void process(void);
    void display(void);
};

void derived :: process(){
    data3 = data2*getData1();
}

void derived :: display(){
    cout<<"Data 1 is: "<<getData1()<<endl;
    cout<<"Data 2 is:"<<data2<<endl;
    cout<<"Final Answer: "<<data3<<endl;
}

int main()
{
    derived d;
    d.setData();
    cout<<d.getData1()<<endl;
    cout<<d.getData2()<<endl;

    d.process();
    d.display();

    return 0;
}