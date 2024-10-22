// cviceni 6.cpp : Defines the entry point for the application.
//

#include "cviceni 6.h"
#include "ctype.h"
#include "string.h"
using namespace std;
char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi.Auto Hyundai ix35 ma pres 120 konskych sil.";
int a = 0;
int b,c,d,v,x,e;
int delky[100];
int soucet() {
	for (int i = 0; i <= strlen(text); ++i)
	{
		b = isalpha(text[i]);

		if (b >> 0) {
			++a;
		}
		else {

		}
	}
	return 0;
}
int cislice() {
		for (int i = 0; i <= strlen(text); ++i)
		{
			c = isdigit(text[i]);

			if (c >> 0) {
				++d;
			}
			else {

			}
		}
	return 0;
}
int DelkySlov(char* text, int delky[100]) {
	x = 0;
	for (int k = 0; k <= strlen(text); ++k)
	{
		v = isalpha(text[k]);

		if (v >> 0) {
			++e;
			delky[x] = e;
		}
		else {
			++x;
			e = 0;
		}
	}
	return 0;
}
int main()
{
	soucet();
	cislice();
	DelkySlov( text, delky);
	printf("Pocet pismen: %d\n", a);
	printf("Pocet cislic: %d", d);
	printf("Delky jednotlivych slov:");
}
