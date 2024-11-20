#include<iostream>
using namespace std;
class Base{
    int num;
    public:
    Base(void){}
    Base( int num){
        this->num = num;
    }
    void getdData(void){
        cout<<num<<endl;
    }
};
int main()
{
    Base a;
    a = 100;
    a.getdData();
 return 0;
}