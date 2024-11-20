#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    Bankdeposit() {} //default constructor to create object 
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);

    void show(void)
    {
        cout << "The value to be returned is: " << returnValue << endl;
    }
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    interestRate = r;
    principal = p;
    years = y;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue + returnValue * interestRate;
    }
}

Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    interestRate = float(r) / 100;
    principal = p;
    years = y;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue + returnValue * interestRate;
    }
}

int main()
{
    int P, Y, R;
    float r;
    Bankdeposit bd1, bd2;

    cout << "Enter p,y,r:" << endl;
    cin >> P >> Y >> r;
    cout << endl;
    bd1 = Bankdeposit(P, Y, r);
    bd1.show();

    cout << "Enter p,y,R(in %):" << endl;
    cin >> P >> Y >> R;
    cout << endl;
    bd2 = Bankdeposit(P, Y, R);
    bd2.show();

    return 0;
}