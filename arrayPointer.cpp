#include <iostream>
using namespace std;

class Item
{
    int itemNo;
    float price;

public:
    void setData(int x, int y)
    {
        itemNo = x;
        price = y;
    }
    void getData(void)
    {
        cout << itemNo << " and " << price << endl;
    }
};
int main()
{
    int size = 3;
    Item *ptr = new Item[size];
    Item *ptrTemp = ptr;
    /* This pointer points to starting of the array of objects.
    As the ptr pointer increments, memory address is lost.
    Avoid Losing the Starting Address usingptrTemp
    */

    int p, q;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id of item and price" << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {

        ptrTemp->getData();
        ptrTemp++;
    }
    delete[] ptr;
    delete[] ptrTemp;

    return 0;
}