#include "VectorMath.h"
#include <iostream>
#include <cmath>

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
    struct vector3d w;
    switch (typ) {
    case soucet:
        w.x = u.x + v.x;
        w.y = u.y + v.y;
        w.z = u.z + v.z;
        break;
    case skalarniSoucin:
     
        w.x = u.x * v.x + u.y * v.y + u.z * v.z;
        w.y = 0;
        w.z = 0;
        break;
    case vektorovySoucin:
        w.x = u.y * v.z - u.z * v.y;
        w.y = u.z * v.x - u.x * v.z;
        w.z = u.x * v.y - u.y * v.x;
        break;
  
    default:
        w.x = w.y = w.z = 0;
        break;
    }
    return w;
}

void tisk(struct vector3d u) {
    double velikost = std::sqrt(u.x * u.x + u.y * u.y + u.z * u.z);
    std::cout << "w = (" << u.x << ", " << u.y << ", " << u.z << ")\n";
    std::cout << "|w| = " << velikost << "\n";


    }
