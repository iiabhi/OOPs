#include <iostream>
using namespace std;
class Date {
public:
    int year;
    int month;
    int day;

    Date(int y, int m, int d) : year(y), month(m), day(d) {
        cout<<"Constructor called"<<endl;
    } // Constructor
};

int main() {
    const Date today(2024, 9, 23); // Constant object
    // today.year = 2025; // Error: cannot modify a const object
    return 0;
}
