#include <iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:

    void complexSum(complex c1,complex c2){
        a= c1.a + c2.a;
        b= c1.b + c2.b;
    } 


    void getData(int a1,int b1){
        a=a1;
        b=b1;
    }
    void display(){
        cout<<"The complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }

};



int main(){
    complex o1,o2,o3;
    o1.getData(1,2);
    o1.display();


    o2.getData(3,5);
    o2.display();

    o3.complexSum(o1,o2);
    o3.display();

    return 0;
}
