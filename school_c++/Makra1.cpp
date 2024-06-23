#include<bits/stdc++.h>

#define CIARA cout << "\n----------------------\n";

#define TEXT { CIARA \
				cout << "VITAJ V PROGRAME"; \
				CIARA 	\
			}

#define PI 3.14 // makro bez parametra = symbolicka konstanta
#define KOCKA(a) pow(a, 3)	//makro s parametrom
#define VALEC(r, v) PI*pow(r, 2)*v

using namespace std;

int main()
{
	
	TEXT;
	
	int a, r, v;
	
	cout << "Zadaj hranu kocky: ";
	cin >> a;
	cout << "Objem kocky: " << KOCKA(a) << endl;
	
	CIARA;
	
	cout << "Zadaj polomer a vysku valca: ";
	cin >> r >> v;
	cout << "Objem valca: " << VALEC(r, v) << endl;
	
	return 0;
}

