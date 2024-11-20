#include <iostream>
using namespace std;

class Employee{
    private:
    int x,y,z;
    public:
    int a,b;
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"x is"<<x<<endl;
        cout<<"y is"<<y<<endl;
        cout<<"z is"<<z<<endl;
        cout<<"a is"<<a<<endl;
        cout<<"b is"<<b<<endl;
    }


};

void Employee::setData(int a1,int b1, int c1){
    x=a1;
    y=b1;
    z=c1;
}

int main(){
    Employee abhi;
    abhi.a=2;
    abhi.b=3;
    abhi.setData(12,13,14);
    abhi.getData();
    return 0;
}