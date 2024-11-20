#include <iostream>
using namespace std;

class Employee{
    static int counter;
    int empId;
    public:
    static void countDisplay(void){
        cout<<"No. of employes till now is:"<<counter<<endl;
    }
    void getId(void);
    void display(void);

};

int Employee :: counter=0;

void Employee :: getId(){
    cout<<"Enter the employee Id of employee:"<<counter+1<<endl;
    cin>>empId;
    
}

void Employee :: display(){
    cout<<"The employee id of employee no.:"<<counter+1<< " is "<<empId;
    cout<<endl;
    counter++;
}




int main(){
    Employee abhi,aman,arpita;

    abhi.getId();
    abhi.display();
    Employee :: countDisplay();



    aman.getId();
    aman.display();
    Employee :: countDisplay();


    arpita.getId();
    arpita.display();
    Employee :: countDisplay();

    return 0;
}