#include <iostream>

class fruit
{
public:
    std::string name;
    int id;

    void show()
    {
        std::cout << "\nTEST SHOW\n";
    }
};

void print(fruit f)
{
    std::cout << "\n";
    std::cout << "F1 Name: " << f.name;
    std::cout << "\n";
    std::cout << "F1 ID: " << f.id;
    std::cout << "\n";
}

fruit newfruit()
{
    fruit f;
    f.name = "new apple";
    f.id = 2;
    return f;
}

int main()
{
    fruit f1;
    f1.name = "apple";
    f1.id = 0;
    f1.show();
    print(f1);

    f1 = newfruit();
    print(f1);

    return 0;
}