// Cviceni 4.cpp: Definuje vstupní bod pro aplikaci.
//

#include "Cviceni 4.h"

using namespace std;
int jePrestupny(int rok)
{
	if (rok % 400 == 0 ) {
		
		return 1;
	}
	else if ((rok % 100 != 0) && (rok % 4 == 0)) {
		return 1;
	}
	else {
		return 0;
	}
	}
int main()
{
	int a;
	a = jePrestupny(1000);
	
	printf("1000   %d\n", a);

	int b;
	b = jePrestupny(2000);
	printf("2000   %d\n", b);

	int c;
	c = jePrestupny(2002);
	printf("2002   %d\n", c);

	int d;
	d = jePrestupny(2012);
	printf("2012   %d\n", d);

	int e;
	e = jePrestupny(2022);
	printf("2022   %d\n", e);

	int f;
	f = jePrestupny(2200);
	printf("2200   %d\n", f);

	return 0;
}
