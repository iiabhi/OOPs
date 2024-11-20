#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:

    void getData(int a1,int b1){
        a=a1;
        b=b1;
    }

    void display(void);
    friend complex sumComplex(complex o1,complex o2);


    
};

complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.a = o1.a+ o2.a;
    o3.b = o1.b+ o2.b;
    return o3;

}


void complex :: display(){
    cout<<"the complex num is : "<<a<<"+"<<b<<"i"<<endl;
}



int main(){
    complex c1,c2,c3;

    c1.getData(1,4);
    c1.display();

    c2.getData(2,9);
    c2.display();

    c3=sumComplex(c1,c2);
    c3.display();





    return 0;
}