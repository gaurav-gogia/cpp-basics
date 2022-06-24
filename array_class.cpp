#include <iostream>
#define LIMIT 4

class polygons
{
public:
    int triangles[LIMIT];

    int *fill()
    {
        for (int i = 0; i < LIMIT; i++)
        {
            triangles[i] = i;
        }
        return triangles;
    }
};

int main()
{
    polygons tries;

    int *triArray = tries.fill();
    for (int i = 0; i < LIMIT; i++)
    {
        std::cout << triArray[i] << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < LIMIT; i++)
    {
        tries.triangles[i] = i * 2;
    }
    for (int i = 0; i < LIMIT; i++)
    {
        std::cout << tries.triangles[i] << " ";
    }
    std::cout << "\n";

    return 0;
}