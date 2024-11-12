#include <iostream>
#include "VectorMath.h"
#include "VectorMath.cpp"
int main() {
    vector3d u, v;

    // Načtení prvního vektoru
    std::cout << "Zadejte prvni vektor (x, y, z) oddelene carkou: ";
    std::cin >> u.x;
    std::cin.ignore();
    std::cin >> u.y;
    std::cin.ignore();
    std::cin >> u.z;

    // Načtení druhého vektoru
    std::cout << "Zadejte druhy vektor (x, y, z) oddelene carkou: ";
    std::cin >> v.x;
    std::cin.ignore();
    std::cin >> v.y;
    std::cin.ignore();
    std::cin >> v.z;

    // Výběr operace
    int operaceVolba;
    std::cout << "Vyberte operaci (1 = soucet, 2 = skalarniSoucin, 3 = vektorovySoucin): ";
    std::cin >> operaceVolba;

    // Volání funkce operace a výpis výsledku
    vector3d vysledek = operace(u, v, static_cast<typOperace>(operaceVolba));
    tisk(vysledek);

    return 0;
}
