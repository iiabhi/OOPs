#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{
    int x;
    int y;
    float result;

public:
    void setData(int, int);
    void function(void);
    void displayResult(void);
};

void simpleCalculator ::setData(int n1, int n2)
{
    x = n1;
    y = n2;
}

void simpleCalculator ::function()
{
    int choice;
    cout << "Enter the number for corresponding arithmetic operation: (1.+ 2.- 3.* 4./) :" << endl;
    cin >> choice;
    if (choice == 1)
    {
        result = x + y;
    }
    else if (choice == 2)
    {
        result = x - y;
    }
    else if (choice == 3)
    {
        result = x * y;
    }
    else if (choice == 4)
    {
        result = (double)x / y;
    }
    else
    {
        cout << "wrong choice" << endl;
        exit(0);
    }
}

void simpleCalculator ::displayResult()
{
    cout << "The result is:" << result << endl;
}
/////
////
/////
////

class scientificCalculator
{
    int a;
    int b;
    float resultsc;

public:
    void setDatasc(int, int);
    void functionsc(void);
    void displayscResult(void);
};

void scientificCalculator ::setDatasc(int n1, int n2)
{
    a = n1;
    b = n2;
}

void scientificCalculator ::functionsc()
{

    int choice;
    cout << "Enter the number for corresponding arithmetic operation: (1.Exponent 2.Base Log 3.Nth root 4.mod) :" << endl;
    cin >> choice;
    if (choice == 1)
    {
        resultsc = pow(a, b);
    }
    else if (choice == 2)
    {
        resultsc = log(a) / log(b);
    }
    else if (choice == 3)
    {
        resultsc = pow(a,1 /double(b));
    }
    else if (choice == 4)
    {
        resultsc = a % b;
    }
    else
    {
        cout << "wrong choice" << endl;
        exit(0);
    }
}

void scientificCalculator ::displayscResult()
{
    cout << "The result is:" << resultsc << endl;
}

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
    int num1;
    int num2;
    int ch;

public:
    void takeInput(void)
    {
        cout << "Enter you numbers:" << endl;
        cin >> num1 >> num2;
    }
    void choice(void)
    {
        cout << "Press 1 for simple calculator and 2 for scientific calculator:" << endl;
        cin >> ch;
        if (ch == 1)
        {
            setData(num1, num2);
            function();
            displayResult();
        }
        else if (ch == 2)
        {
            setDatasc(num1, num2);
            functionsc();
            displayscResult();
        }
        else
        {
            cout << "Bad choice" << endl;
            exit(0);
        }
    }
};

int main()

{
    hybridCalculator op1;
    op1.takeInput();
    op1.choice();
    return 0;
}