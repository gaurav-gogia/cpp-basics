#include <iostream>

class Person
{
protected:
    int id = 100;
};

class Architect : Person
{
    int designNumber;
    friend class Engineer;

public:
    Architect()
    {
        designNumber = 10;
    }
};

// friend class is engineer NOT a part of architect class
class Engineer
{
    int engine = 10;
    friend int getEngine(Engineer edris);

public:
    void Build(Architect archer);
};

// creating this function outside of the class to demonstrate the fact that class functions don't have to be defined in-line (within the class)
// they can simply be declared in the class but later defined outside
// notice "::" scope operator, we use this operator to connect class with its related function
void Engineer::Build(Architect archer)
{
    std::cout << "id: " << archer.id << "\n";
    std::cout << "design number: " << archer.designNumber << "\n";
}

int getEngine(Engineer edris)
{
    return edris.engine;
}

int main()
{
    Architect archer = Architect();
    Engineer edris;

    edris.Build(archer);
    std::cout << "engine: " << getEngine(edris);

    return 0;
}