#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x;
    int y;

public:
    friend float distance(point p1, point p2);
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << "The points are " << x << " and " << y << endl;
    }
};

inline int square(int num){
    return num*num;
}

float distance(point p1, point p2)
{
    float res;
    res = (sqrt(abs(((square(p1.x)) - (square(p2.x))) + (square(p1.y)) - (square(p2.y)))));
    return res;
}



int main()
{
    float dist;
    point a1(2, 3), a2(4, 5);
    a1.display();
    a2.display();

    dist = distance(a1, a2);
    cout<<"Distance is:"<<dist<<endl;

    return 0;
}