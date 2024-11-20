#include <iostream>

class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int x, int y) : x(x), y(y) {}

    // Const member function
    void display() const {
        std::cout << "Point(" << x << ", " << y << ")\n";
    }

    // Non-const member function
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    const Point p1(10, 20); // Constant object
    p1.display(); // OK: display() is a const member function
    // p1.move(5, 5); // Error: cannot call non-const member function on a const object

    Point p2(30, 40); // Non-constant object
    p2.display();
    p2.move(5, 5); // OK: move() is a non-const member function
    p2.display();

    return 0;
}
