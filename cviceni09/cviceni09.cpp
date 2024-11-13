#include <iostream>
#include "VectorMath.h"
#include "VectorMath.cpp"
#include "cviceni09.h"
int main() {
    vector3d u, v;

 
    std::cout << "Zadejte prvni vektor (x, y, z) oddelene carkou: ";
    std::cin >> u.x;
    std::cin.ignore();
    std::cin >> u.y;
    std::cin.ignore();
    std::cin >> u.z;

    std::cout << "Zadejte druhy vektor (x, y, z) oddelene carkou: ";
    std::cin >> v.x;
    std::cin.ignore();
    std::cin >> v.y;
    std::cin.ignore();
    std::cin >> v.z;

    
    int operaceVolba;
    std::cout << "Vyberte operaci (1 = soucet, 2 = skalarniSoucin, 3 = vektorovySoucin): ";
    std::cin >> operaceVolba;

    vector3d vysledek = operace(u, v, static_cast<typOperace>(operaceVolba));
    tisk(vysledek);
    double vel1 = sqrt(u.x * u.x + u.y * u.y + u.z * u.z);
    double vel2 = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
    if (vel1 > vel2) {
        printf("Vektor 1 je vetsi nez vektor 2");
    }
    if (vel1 == vel2) {
        printf("Vektor 1 = vektor 2");
    }
    if (vel2 > vel1) {
        printf("Vektor 2 je vetsi nez vektor 1");
    }
    return 0;
}
