#include <iostream>

using namespace std;

int main() {
	int value, d, p;
	float a, b, c;
    // Uloha 1
	cout << "Zadaj pocet pixelov: ";
    cin >> p;
    cout << p << " Pixelov sa rovna " << p/37.8 << endl;
    
    // Uloha 2
    cout << "Zisti ci sa trojuholnik da zostrojit\n";
    cout << "Zadaj stranu A: ";
		cin >> a;
	cout << "Zadaj stranu B: ";
		cin >> b;
	cout << "Zadaj stranu C: ";
		cin >> c;
		
	if ( a+b > c && a+c > b && b+c > a){
		cout << "trojuholnik sa da zostrojit\n";
	} 
	else {
		cout << "trojuholnik sa neda zostrojit\n";
	}
	cout << endl;
	// Uloha 3
	cout << "Neparne cisla od 1 do 100 (max 3 v riadku)";
	cout << "1  3  5\n";
	cout << "7  9  11\n";
	cout << "13 15 17\n";
	cout << "19 21 23\n";
	cout << "25 27 29\n";
	cout << "31 33 35\n";
	cout << "37 39 41\n";
	cout << "43 45 47\n";
	cout << "49 51 53\n";
	cout << "55 57 59\n";
	cout << "61 63 65\n";
	cout << "67 69 71\n";
	cout << "73 75 77\n";
	cout << "79 81 83\n";
	cout << "85 87 89\n";
	cout << "91 93 95\n";
	cout << "97 99\n";
	cout << endl;
	// Uloha 4
	cout << "Cyklus 1\n";
		for (int d; d < 3; d++){
			cout << "GABNAM Namestovo\n";
		}
		
	cout << endl;
	// Uloha 5
	cout << "Zadaj strany kvadra\n";
	cout << "Zadaj stranu a: ";
		cin >> a;
	cout << "Zadaj stranu b: ";
		cin >> b;	
	cout << "Zadaj stranu c: ";
		cin >> c;
		
	cout << "Povrch = 1\n";		
	cout << "Objem = 2\n";
	cout << "Oboje = 3\n";
	cin >> value;
	switch(value){
		case 1: cout << "Povrch kvadra = " << 2 * (a*b + a*c + b*c) << endl; break;
		case 2: cout << "Objem kvadra = " << a * b * c << endl; break;
		
		case 3: cout << "Povrch kvadra = " << 2 * (a*b + a*c + b*c) << endl;
				cout << "Objem kvadra = " << a * b * c << endl; break;
	}
    return 0;
}

