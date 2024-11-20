#include <iostream>
using namespace std;

class Item {
    int itemNo;
    float price;

public:
    
    // Method to set data
    Item& setData(int x, float y) {  //& is used for referencing.
        itemNo = x;
        price = y;
        return *this; // Return the current object
    }

    // Method to display data
    void display(){
        cout << "Item No: " << itemNo << ", Price: " << price << endl;
    }
};

int main() {
    Item item1;
    
    item1.setData(101, 29.99).setData(102, 39.99).display();

    item1.setData(101, 29.99).setData(102, 39.99).setData(103,59.99); // Method chaining

    item1.display();

    return 0;
}
