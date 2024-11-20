#include<iostream>
using namespace std;\


class base{
    public:
    base(void){
        cout<<"Base constructor called"<<endl;
    }
    virtual ~base(void){
        cout<<"Base destructor called"<<endl;
    }

};

class derived: public base{
    public:
    derived(void){
        cout<<"Derived constructor called"<<endl;
    }
    ~derived(void){
        cout<<"Derived destructor called"<<endl;
    }
};
int main()
{
    base* b1;
    base* d1;
    b1 = new base();
    d1 = new derived();

    delete b1;
    delete d1;



 return 0;
}