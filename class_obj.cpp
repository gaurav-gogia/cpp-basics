#include <iostream>

class fruit
{
public:
    std::string fruit_name = "apple";
    int quantity = 10;
};

int main()
{
    fruit f1;

    std::cout << f1.fruit_name << "\n";
    std::cout << f1.quantity << "\n";

    return 0;
}