#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void getId(void);
    void getPrice(void);
    void display(void);
};

void Shop ::getId(void)
{
    cout << "Enter Id of the item no." << counter + 1 << endl;
    cin >> itemId[counter];
    cout << endl;
    getPrice();
    
}
void Shop ::getPrice(void)
{
    cout << "Enter the price of the item no." <<itemId[counter] << endl;
    cin >> itemPrice[counter];
    cout << endl;
    counter++;
}

void Shop ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item Id:" << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    int num;
    Shop dukkan;
    dukkan.initCounter();
    cout << "How many items you wish to add to dukkan" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        dukkan.getId();
        
    }
    dukkan.display();


    return 0;
}