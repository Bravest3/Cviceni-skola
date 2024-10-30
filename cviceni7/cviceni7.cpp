// cviceni7.cpp : Defines the entry point for the application.
//

#include "cviceni7.h"
#include <math.h>
#include "Body2d.h"
#include "Body2d.cpp"
#include <limits.h>
#define POCET_BODU 10
int a[1];

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


//indexNejblizsi(POCET_BODU, body, a[0], a[1]);
	printf("Vysledek: %d\n", indexNejblizsi(POCET_BODU, body, a[0], a[1]));
	printf("Vysledek dalsi: %lf\n", prumernaVzdalenost(POCET_BODU, body, a[0], a[1]));
	bodyPerimetr(POCET_BODU, body, a[0], a[1],10);
	return 0;
}
