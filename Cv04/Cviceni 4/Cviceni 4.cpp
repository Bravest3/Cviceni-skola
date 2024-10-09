// Cviceni 4.cpp: Definuje vstupní bod pro aplikaci.
//

#include "Cviceni 4.h"

using namespace std;
int jePrestupny(int rok)
{
	if (rok % 400 == 0 ) {
		
		return 1;
	}
	else if ((rok % 100 != 0 ) && (rok % 4 == 0)) {
		return 1;
	}
	else {
		return 0;
	}
	}
int jeLichy(int rok)
{
	if (rok % 2 != 0) {
		return 1;
	}
	else {
		return 0;
	}

}
int main()
{
	int a;
	int g;
	a = jePrestupny(1000);
	g = jeLichy(1000);
	printf("1000     %d		%d\n", a,g);

	int b;
	int h;
	b = jePrestupny(2000);
	h = jeLichy(2000);
	printf("2000	%d		%d\n", b,h);

	int c;
	int i;
	c = jePrestupny(2002);
	i = jeLichy(2002);
	printf("2002   %d		%d\n", c,i);

	int d;
	int j;
	d = jePrestupny(2012);
	j = jeLichy(2012);
	printf("2012   %d		%d\n", d,j);

	int e;
	int k;
	e = jePrestupny(2022);
	k = jeLichy(2022);
	printf("2022   %d		%d\n", e,k);

	int f;
	int l;
	f = jePrestupny(2200);
	l = jeLichy(2200);
	printf("2200   %d		%d\n", f,l);

	int dalsi;
	int dalsi1;
	dalsi = jePrestupny(2201);
	dalsi1 = jeLichy(2201);
	printf("2201   %d		%d\n", dalsi, dalsi1);

	int dalsi2;
	int dalsi3;
	dalsi2 = jePrestupny(2021);
	dalsi3 = jeLichy(2021);
	printf("2021   %d		%d\n", dalsi2, dalsi3);
	
	return 0;
}
