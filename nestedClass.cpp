#include <iostream>

class Outer
{
private:
    int outerVar;

public:
    Outer(void)
    {
        std::cout << "Outer constructor" << std::endl;
    }
    Outer(int val) : outerVar(val)
    {
    }

    // Nested class (no static keyword needed)
    class StaticNested
    {

    public:
        StaticNested(void)
        {
            std::cout << "Static constructor called" << std::endl;
        }
        void display()
        {
            std::cout << "Static nested class\n";
        }
    };

    // Non-static nested class (Inner class)
    class Inner
    {
    public:
        int innerData;
        Inner(void)
        {
            std::cout << "Inner construtor" << std::endl;
        }
        void getData(int n)
        {
            innerData = n;
        }
        void displayinner()
        {
            std::cout << "innerdata is :" << innerData << std::endl;
        }

        void display(const Outer &outer)
        {
            std::cout << "Inner class accessing outerVar: " << outer.outerVar << "\n";
        }
    };

    void show()
    {
        std::cout << "Outer class variable: " << outerVar << "\n";
    }
    Inner in;
    void func(void)
    {
        in.getData(70);
        in.displayinner();
    }
};

int main()
{
    Outer outer(10);
    outer.show();

    // Creating an object of the nested class
    Outer::StaticNested staticNested;
    staticNested.display();

    // Creating an object of the non-static nested class
    Outer::Inner inner;
    inner.display(outer);

    outer.func();

    
    Outer o;
    o.in.innerData = 2;
    std::cout << o.in.innerData;
    return 0;
}
