#include<iostream>
using namespace std;


class Student{
    protected:
    int rollNo;
    public:
    void setRoll(int num){
        rollNo = num;
    }
    void getRoll(void){
        cout<<"Roll no.is:"<<rollNo<<endl;
    }
};

class Test : public virtual Student{    //we can write both public virtual or virtual public
    protected:
    int maths;
    int physics;
    public:
    void setMarks(int m1,int m2){
        maths = m1;
        physics = m2;

    }
};

class Sports : virtual public Student{
    protected:
    int score;
    public:
    void setScore(int sc){
        score = sc;
    }
};

class Result : public Sports,public Test{
    int total;
    public:
    void display(void){
        total = score + maths + physics;
        cout<<"Maths marks:"<<maths<<endl;
        cout<<"Physics marks:"<<physics<<endl;
        cout<<"PT score is :"<<score<<endl;
        cout<<"Total score is:"<< total<<endl;


    }
};



int main()
{
    Result abhi;
    abhi.setRoll(533);
    abhi.getRoll(); //function of line  57,58 is executed because we used virtual keyword, it would throw error we won't use that virtual keyword.
    abhi.setMarks(99,100);
    abhi.setScore(98);
    
    abhi.display();
 return 0;
}