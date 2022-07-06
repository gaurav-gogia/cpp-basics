#include <iostream>

class fruit
{
public:
    std::string name;
    int id;
};

int main()
{
    fruit fruits[2];

    fruits[0].name = "apricot";
    fruits[0].id = 0;

    fruits[1].name = "apple";
    fruits[1].id = 1;

    for (int i = 0; i < 2; i++)
    {
        std::cout << "Fruit: " << i << " " << fruits[i].name;
        std::cout << "\n";
    }

    return 0;
}