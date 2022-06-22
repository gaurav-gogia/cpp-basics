#include <iostream>

// notice how a structure doesn't allow us to control access levels
// everything is public in a structure
struct book
{
    int quantity;
    std::string isbn;
    std::string name;

    book(int _quantity, std::string _isbn, std::string _name)
    {
        quantity = _quantity;
        isbn = _isbn;
        name = _name;
    }

    void read()
    {
        std::cout << name;
    }
};

// default access specifier in a class is PRIVATE
class person
{
    int uuid;

public:
    std::string name;

    person(int _uuid, std::string _name)
    {
        uuid = _uuid;
        name = _name;
    }

    int GetID()
    {
        return uuid;
    }
};

int main()
{
    book odyssey = book(432, "bce", "an odyssey");
    odyssey.read();
    std::cout << "\n"
              << odyssey.isbn
              << " "
              << odyssey.quantity
              << "\n";

    person somebody = person(1234, "somebody");
    std::cout << somebody.name << "\n";
    std::cout << somebody.GetID() << "\n";

    return 0;
}
