#include <iostream>
using namespace std;

class second;

class first
{
    int firstValue;

public:
    friend void swap(first &a, second &b);
    void getData(int data)
    {
        firstValue = data;
    }
    void display()
    {
        cout << firstValue;
    }
};

class second
{
    int secondValue;

public:
    friend void swap(first &a, second &b);
    void getData(int data)
    {
        secondValue = data;
    }
    void display()
    {
        cout << secondValue;
    }
};

void swap(first &a, second &b)
{
    int temp = a.firstValue;
    a.firstValue = b.secondValue;
    b.secondValue = temp;
}

int main()
{
    first f;
    second s;
    f.getData(39);
    s.getData(21);

    cout<<"values of first and second respectively before swapping is:"<<endl;
    f.display();
    cout<<"\t";
    s.display();
    cout<<endl;

    swap(f,s);

    cout<<"values of first and second respectively after swapping is:"<<endl;
    f.display();
    cout<<"\t";
    s.display();
    cout<<endl;

    return 0;
}