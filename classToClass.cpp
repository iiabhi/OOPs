#include <iostream>
using namespace std;

class Triangle
{public:
    int height;
    int base;
    int triArea;


    Triangle(int a, int b) : height(a), base(b)
    {
        triArea = 0.5 * height * base;
    }
    void print(void)
    {
        cout << "triagnle area:" << triArea <<endl;
    }
//casting operator function
    // operator Rectangle(){
    //     Rectangle temp(height,base);
    //     return temp;

    // }
};

class Rectangle
{
    int length;
    int width;
    int rectArea;

public:
    Rectangle(int x, int y) : length(x), width(y)
    {
        rectArea = length * width;
    }
    void display(void)
    {
        cout << "Rectangle area:" << rectArea << endl;
    }

    Rectangle(Triangle t){
        width= t.base;
        length = t.height;
        rectArea = width *length;

    }
};





int main()
{
    Triangle t(10, 20);
    t.print();
    Rectangle r = t; //r(t)
    r.display();
    return 0;
}