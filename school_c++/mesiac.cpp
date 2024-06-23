#include <iostream>

using namespace std;

int main() {
    int a, bload;
    cout << "Vpis mesiac v roku\n";
    cin >> a;
    
    if (a <= 5 && a >= 3){
		bload = 1;
	}
	if (a <= 8 && a >= 6){
		bload = 2;
	}
	if (a <= 11 && a >= 9){
		bload = 3;
	}
	if (a <= 2 || a == 12){
		bload = 4;
	}
	
    switch (bload){
	case 1: cout << "Jar\n"; break;
	case 2: cout << "Leto\n"; break;
	case 3: cout << "Jesen\n"; break;
	case 4: cout << "Zima\n"; break;	
	}
	return 0;
}

