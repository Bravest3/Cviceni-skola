// Cv10.cpp : Defines the entry point for the application.
//

#include "Cv10.h"
#include <iostream>
#include <fstream>
#include <string>
#include<ctype.h>
using namespace std;

int main()
{
	ofstream MujText1("vstup.txt");
	MujText1 << "Jako priklad jsou zde cislice 123456, pismena a i jine znaky, jako jsou konce radku, 3 carky a tecky.";
	MujText1.close();
	string text;
	ifstream MujText2("vstup.txt");
	while (getline(MujText2, text)) {
		cout << text << endl;
	}
	MujText2.close();
	int a = 0;
	int b = 0;
	int c1;
	int c2;
	for (int i = 0; i <= text.length(); i++) {
		c1 = isalpha(text[i]);
		c2 = isdigit(text[i]);
		if (c1 > 0) {
			a++;
		}
		else if (c2 > 0) {
			b++;
		}
		

	}

	ofstream vysledky("vysledky.txt");
	vysledky << "V textu je " << a << " pismen" << " a " << b << " cislic" << endl;
	vysledky.close();
	cout <<"V textu je " << a << " pismen" << " a " << b << " cislic" << endl;
	
	
}
