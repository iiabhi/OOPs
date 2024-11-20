#include <iostream>
using namespace std;

class simple
{
    static int count;

public:
    simple()
    {
        count++;
        cout << "Constructor Called:" << count << endl;
    }
    ~simple()
    {
        cout << "Destructor Called:" << count << endl;
        count--;
    }
};

int simple :: count = 0;

int main()
{
    cout << "Driver Code starts here" << endl;
    cout << "Calling constructor" << endl;
    simple s1, s2;
    {
        cout << "Enter the block" << endl;
        cout << "Calling constructor inside the block" << endl;
        simple s3, s4, s5;
        
        cout << "exited the block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}