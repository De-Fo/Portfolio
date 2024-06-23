#include<bits/stdc++.h>

using namespace std;

int main()
{
	float a, b;
	cout << "Zadaj cislo: ";
	cin >> a;
	
	if (a < 0){
		b = abs(a);
	}
	
	else {
		b = a;
	}
	
	cout << "Absolutna hodnota cisla " << a << " je: " << b << endl; 
	return 0;
}
