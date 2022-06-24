#include <iostream>

class globe
{
public:
    static int one;
    static void print()
    {
        std::cout << one << "\n";
    }
};

int globe::one = 0;

int main()
{
    std::cout << "Enter one: ";
    std::cin >> globe::one;
    globe::print();
    return 0;
}