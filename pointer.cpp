#include<iostream>
using namespace std;
int main()
{

int a = 3;
//new keyword to allocate heap memory.
    int* ptr = &a;
    int *ptr1 = new int(4);
    int *ptr2 = new int(a);
    int *ptr3 = new int[40];
    ptr3[0] = 5;
    ptr3[1] = 7;

//malloc function used to allocate memory
    int *ptr4 = (int *)malloc(sizeof(int));
    *ptr4 = a;

    int *ptr5 = (int *)malloc(sizeof(int)*20);
    ptr5[0]= a;




    cout<<*(ptr)<<endl;;
    cout<<*(ptr1)<<endl;
    cout<<*(ptr2)<<endl;
    cout<<*(ptr3)<<endl; //prints element at first index(0)
    cout<<*(ptr4)<<endl;
    cout<<(ptr5[0])<<endl;

//delete keyword used to free memory
    delete ptr1;
    delete ptr2;
    delete[] ptr3;

//free function used to free memory
free(ptr4);
free(ptr5);


 return 0;
}