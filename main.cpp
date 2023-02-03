#include "Bird.hpp"
#include <cassert>

void printSpecie(Bird &b)
{
    std::cout << b.Species() << std::endl;
}
int main()
{
    Seagull Bixo_um("Jovem", 23);
    Chicken Bixo_dois("Motor do Scanner", 99);

    printSpecie(Bixo_dois);
    printSpecie(Bixo_um);
}
