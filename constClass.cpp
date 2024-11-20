#include <iostream>

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int area() const { // Const member function
        return width * height;
    }

    void resize(const int newWidth, const int newHeight) { // Const parameters
        width = newWidth;
        height = newHeight;
    }

    void display() const {
        std::cout << "Rectangle(" << width << ", " << height << ")\n";
    }
};

int main() {
    const Rectangle rect1(10, 20); // Constant object
    rect1.display(); // OK: display() is a const member function
    std::cout << "Area: " << rect1.area() << std::endl; // OK: area() is a const member function
    // rect1.resize(15, 25); // Error: cannot call non-const member function on a const object

    Rectangle rect2(30, 40); // Non-constant object
    rect2.display();
    rect2.resize(35, 45); // OK: resize() is a non-const member function
    rect2.display();

    return 0;
}
