#include <iostream>
using namespace std;

class base
{
    string name;
    int var;

public:
base(void){}
    void *operator new(size_t size)
    {
        cout << "Operloading new operator with size:" << size << endl;
        void *p;
        p = malloc(size);
        return p;
    }

    void operator delete(void *p)
    {
        cout << "Delete operator overloading" << endl;
        free(p);
    }
};
int main()
{ base *ptr = new base;
delete ptr;


    return 0;
}