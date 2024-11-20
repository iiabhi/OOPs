#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void setData(int a, int b)
    {
        real = a;
        imag = b;
    }
    void getData(void)
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.setData(2, 4);
    c1.getData();

    Complex *ptr2 = &c1;  //declaring a pointer and passing address of the object.
    (*ptr2).setData(1,3);   //line 23 and 24 , 27 and 28 do the same job.
    (*ptr2).getData();

    Complex *ptr = new Complex; 
    (*ptr).setData(3, 8);
    (*ptr).getData();

    Complex *ptr1 = new Complex; 
    ptr1->setData(9, 8);  //line 31 and 32 corresponds to line 35 and 36(they both are same thing.)
    ptr1->getData();


    Complex *ptr4 = new Complex[5]; //Allocating heap memory for 5 different objects of class complex.
    ptr4->setData(2,1);
    ptr4->getData();
    ptr4++;
    ptr4->setData(5,1);
    ptr4->getData();
    ptr4--;
    ptr4->getData();
    ptr4++;
    ptr4->getData();
    (ptr4[3]).setData(1,9); //here in line 49 AND 50 we can't use arrow operator as here ptr[i] is not a pointer but data type Complex(class).
    ptr4[3].getData();




    delete ptr; //free the allocated memory
    delete ptr1;
    delete [] ptr4;
    //we need not to delete ptr2 as the memory is not allocated in the heap



    return 0;
}