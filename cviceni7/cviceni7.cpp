// cviceni7.cpp : Defines the entry point for the application.
//

#include "cviceni7.h"
#include <math.h>
#include "Body2d.h"
#define POCET_BODU 10
int a[1];
double vel[POCET_BODU];
using namespace std;


int main()
{
	int body[POCET_BODU][2] = { 5, 10,
   -14, 2,
   45, 4,
   -9, 8,
   58, -3,
   47, 5,
   -18, -86,
   75, 7,
   -25, 51,
   17, 98 };
	printf("Zadej dva body X a Y:");
	scanf_s("%d,%d", &a[0], &a[1]);
	indexNejblizsi();
	return 0;
}
