#include <iostream>
using namespace std;

// Class ONe(Base class for exam class)
class Student
{
protected:
    int rollNo;

public:
    void setRollNo(int roll);
    void getRollNo(void);
};

void Student ::setRollNo(int roll)
{
    rollNo = roll;
}

void Student ::getRollNo(void)
{
    cout << "Roll number is:" << rollNo << endl;
}

// Class B (base class for Result class and derived class for student class)
class Exam : private Student
{
protected:
    int math;
    int physics;

public:
    void setMarks(int, int);
    void display(void);
};

void Exam ::setMarks(int m1, int m2)
{
    setRollNo(420);
    getRollNo();

    math = m1;
    physics = m2;
}

void Exam ::display()
{
    cout << "Math marks:" << math << endl;
    cout << "Physics marks:" << physics << endl;
}

// class C (derived class for Exam)

class Result : private Exam
{
protected:
    float percentage;

public:
    void result(void);
};

void Result ::result()

{
    setMarks(98, 99);
    display();
    cout << "Result is:" << (math + physics) / 2 << endl;
}

int main()
{

    Result abhi;
    abhi.result();

    return 0;
}
