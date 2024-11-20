#include<iostream>
using namespace std;
class Date {
public:
    int year;
    int month;
    int day;

    Date(int y, int m, int d) : year(y), month(m), day(d) {} // Constructor

    void print() const { // Const member function
        cout << year << '/' << month << '/' << day;
    }
};

int main() {
    const Date today(2024, 9, 23);
    today.print(); // OK: print() is a const member function
    return 0;
}
