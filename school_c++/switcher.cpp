#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;

int main() {
	int balue;
	float a, b;
    cout << "Vitaj v kalkulacke\n";
    cout << "Zadaj cislo 1: \n";
    cin >> a;
    cout << "Zadaj cislo 2: \n";
    cin >> b;
    cout << "Vyber si operaciu, vpis hodnotu uvedenu v zatvorke vedla operacie\n";
    cout << "1. - Sucet\n";
    cout << "2. - Rozdiel\n";
    cout << "3. - Sucin\n";
	cout << "4. - Podiel\n";
	
	cin >> balue;
	switch (balue){
		case 1: cout << setprecision(3) << a+b; break;
		case 2: cout << setprecision(3) << a-b; break;
		case 3: cout << setprecision(3) << a*b; break;
		case 4: cout << setprecision(3) << a/b; break;
		default: cout << a*a*b*b; break;
	}
	
	return 0;
}

