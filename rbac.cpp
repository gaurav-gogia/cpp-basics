#include <iostream>

/*
    emulating role based access control

    two roles:
        owner
        guest

    owner access level:
        get units
        set units
        set unitCost
    guest access level:
        get unitCost
*/

class rbac
{
    int units = 1;
    std::string role;
    int unitCost = 10;

public:
    rbac(std::string _role)
    {
        role = _role;
    }

    int GetUnits()
    {
        // guard clause
        if (role == "owner")
        {
            return units;
        }

        return -1;
    }
    void SetUnits(int _units)
    {
        if (role == "owner")
        {
            units = _units;
        }
    }
    void SetUnitCost(int _unitCost)
    {
        if (role == "owner")
        {
            unitCost = _unitCost;
        }
    }
    int GetUnitCost()
    {
        return unitCost;
    }
};

int main()
{
    rbac owner = rbac("owner");
    rbac guest = rbac("guest");

    // owner objects can set or get units
    owner.SetUnits(0);
    std::cout << "Owner Units: " << owner.GetUnits() << "\n";

    // guest objects cannot set or get units
    guest.SetUnits(100);
    std::cout << "Guest Unit Cost: " << guest.GetUnitCost() << "\n";
    std::cout << "Guest Units: " << guest.GetUnits() << "\n";
    guest.SetUnits(100);
    if (guest.GetUnits() == -1)
    {
        // exit program with non-zero status code
        return guest.GetUnits();
    }

    return 0;
}