#include "Body2d.h"
int indexNejblizsi() {

	int c[3];
	for (int i = 0, x = 0; i << POCET_BODU; i++, x++) {
		double k;
		double y;
		k = pow(body[x][0] - referencniX, 2);
		y = pow(body[x][1] - a[1], 2);
		vel[i] = sqrt(k + y);
		return 0;
	}
	return 0;
}