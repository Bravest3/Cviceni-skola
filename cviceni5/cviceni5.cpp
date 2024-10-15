﻿// cviceni5.cpp: Definuje vstupní bod pro aplikaci.
//

#include "cviceni5.h"
using namespace std;

double a[3];
double b[3];
double c[3];
double z,v,x,y,w,k;

void soucet(double a[3], double b[3], double c[3])
{
	
	for (int i = 0; i < 3; i++) {
		c[i] = a[i] + b[i];

	}
}
double velikost(double a[3]) {
	x= pow(a[0], 2);       
	y= pow(a[1], 2);
	w= pow(a[2], 2);
	z = x + y + w;
	v = sqrt(z);
	return v;
}
double skalarniSoucin(double a[3], double b[3]) {
	k = a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
	return k;
}
int main()
{
	printf("Zadej vektor A, oddeleny carkami: ");
	scanf_s("%lf,%lf,%lf", &a[0], &a[1], &a[2]);
	printf("Zadej vektor B, oddeleny carkami: ");
	scanf_s("%lf,%lf,%lf", &b[0], &b[1], &b[2]);
	soucet(a,b,c);
	printf_s("Soucet A + B: (%lf,%lf,%lf)\n", c[0], c[1], c[2]);
	
	printf("Velikost A:%lf\n", velikost(a));
	printf("Skalarni soucin A a B: %lf", skalarniSoucin(a, b));
	return 0;
}


