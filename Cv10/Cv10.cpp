// Cv10.cpp : Defines the entry point for the application.
//

#include "Cv10.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
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
	int vety = 0;
	for (int p = 0; p <= text.length() - 1; p++) {
		if (text[p] == '.' || text[p] == '?' || text[p] == '!') {
			++vety;
		}
	}
	int slova = 0;
	int d1;
	int d2;
	bool slovocine = false;
	for (int g = 0; g <= text.length(); g++) {
		d1 = isalpha(text[g]);
		d2 = isalpha(text[g]);
		
		if (d1 > 0) {
			slovocine = true;

		}
		else if (d2 == 0) {
			slovocine = false;
		}
		if (text[g] == ' ' || text[g] == '.' || text[g] == '?' || text[g] == '!' && slovocine == true) {
			++slova;
		}
	}
	ofstream vysledky("vysledky.txt");
	vysledky << "V textu je " << a << " pismen" << " a " << b << " cislic" << " a " << vety << " vety." << endl;
	vysledky << "A dokonce je tam taky: " << slova << " slov" << endl;
	vysledky.close();
	cout <<"V textu je " << a << " pismen" << " a " << b << " cislic" << " a " << vety << " veta/y." << endl;
	cout << "A dokonce je tam taky: " << slova << " slov" << endl;
	
}
