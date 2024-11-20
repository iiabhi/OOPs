#include <iostream>
#include<string>
using namespace std;

class binary{
    private:
    string s;
    public:
    void setBin(void);
    void chkBin(void);
    void onesComplement(void);
    void display(void);
};

void binary :: setBin(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}

void binary :: chkBin(void){
    for(int i=0;i< s.length();i++){
        if(s.at(i) !='0' && s.at(i) != '1' ){
            cout<<"incorrect binary"<<endl;
            exit(0);

        }
    }
}

void binary :: onesComplement(void){
    for(int i=0;i< s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';

        }
        else{
            s.at(i) == '0';
        }
    }     
}


void binary :: display(void){
   
        cout<<s;
        cout<<endl;
    
}




int main(){
    binary b;
    b.setBin();
    b.chkBin();
    b.display();
    b.onesComplement();
    b.display();
}