#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	c = 0;
	cout << "Zadaj cislo pre vypocitanie cifeneho suctu: ";
	cin >> a;
	while (a != 0){
		b = a % 10;
	    a = a / 10;
	    c += b;
	}

	cout << "Ciferny sucet: " << c << endl;

	return 0;
}

