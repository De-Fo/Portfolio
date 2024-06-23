#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int pocet;
    int a;
    a = 0;

    cout << "pocet prvkov Fibonacciho postoupnosti: ";
    cin >> pocet;

    if (pocet <= 0) {
        cout << "musi byt vacsie ako nula" << endl;
    }
    if (pocet >=31) {
    	pocet = 31;
	}

    cout << "postupnost: " << endl;
    for (int i = 0; i < pocet; ++i) {
    	if (fibonacci(i) < 1000000){
        	cout << fibonacci(i) << " ";
        	a++;
    	}
    	if (a % 5 == 0){
    		cout << endl;
		}
	}
	cout << endl;
	cout << "Pocet clenov postupnosti je: " << a << endl;
    return 0;
}
