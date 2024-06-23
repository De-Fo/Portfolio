#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, x;
    cout << "Zadaj kazdorocny vklad: ";
    cin >> a;
    cout << endl;
    cout << "Zadaj cielovu ciastku: ";
    cin >> b;
    cout << endl;
    cout << "Zadaj rocny urok (v%): ";
    cin >> c;
    cout << endl;    
    
    while (d < b){
    	d = (d + a) * (1 + c/100);
    	cout << "Na konci " << x <<". roku je na ucte " << d << "EUR." << endl;
    	x += 1;
	}
	return 0;
}

