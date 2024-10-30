#include "Body2d.h"
#include <limits.h>

double vel[10];
int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int
	referencniY) {
	
	int c[3];
	double k;
	double y;
	for (int i = 0, x = 0; i < 10; i++, x++) {

		k = pow(poleBodu[x][0] - referencniX, 2);
		y = pow(poleBodu[x][1] - referencniY, 2);
		vel[i] = sqrt(k + y);
		
	}
	int n = sizeof(vel) / sizeof(vel[0]);
	int m = INT_MAX;
		for (int i = 0; i < n; i++) {
			if (vel[i] < m) 
				m = vel[i];
			
			;
		};
	return m;
}
double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY) {
	
	double sum = 0;

	for (int i = 0; i < velikost; i++)
	{
		sum = sum + vel[i];
	}
	double c;
	c = sum / velikost;
	return c;
	 
}
int bodyPerimetr(int velikost, int (*poleBodu)[2], int referencniX, int referencniY, int perimetr) {
	
	int l;
	for (int i = 0; i < velikost; i++) {
		if (vel[i] < perimetr)
			printf("Velikost je: %lf a vektor je: (%d, %d)\n", vel[i], poleBodu[i][0], poleBodu[i][1]);


	}
	return 0;
}