#include <iostream>
using namespace std;


class Calculator {
public:
    int add(const int a, const int b) {
        // a = a + 1; // Error: cannot modify a const parameter
        return a + b;
    }
};

int main() {
    Calculator calc;
    int result = calc.add(5, 3);
    cout << "Result: " << result << std::endl;
    return 0;
}
