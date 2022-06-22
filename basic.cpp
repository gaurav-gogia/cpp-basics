#include <iostream>

int main()
{
    std::cout << "Hi\n";

    int num;
    std::string name;

    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Num: ";
    std::cin >> num;

    int array[5];
    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
        std::cout << i << " ";
    }

    return 0;
}