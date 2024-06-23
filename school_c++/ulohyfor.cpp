#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	 a = 5;
	cout << "1 uloha\n";
    cout << "Zadaj pocet hviezdiciek: ";
    cin >> a;
    for (int i = 0; i < a; i++){
    	cout << "*\n";
	}
	
	cout << "2 uloha \n";
    cout << "Zadaj pocet hviezdiciek: ";
    cin >> a;
    for (int i = 0; i < a; i++){
    	cout << "* ";
	}
	cout << "\n";

	cout << "3 uloha \n";
    for (int b = 1; b <= 5; b++) {
        for (int c = 1; c <= 5; c++) 
        {
            cout << "* ";
        }
        cout << endl;
	}
	cout << "\n";

	cout << "4 uloha \n";
	cout << "Zadaj pocet hviezdiciek: ";
 	cin >> a;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
            cout << "* ";
        }
        cout << endl;
	}
	cout << "\n";
	
	cout << "5 uloha \n";
	cout << "Zadaj pocet cislic 5: ";
    cin >> a;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
            cout << "5 ";
        }
        cout << endl;
	}
	cout << "\n";
	
	cout << "6 uloha \n";
	cout << "Zadaj sirku obdlznika: ";
    cin >> a;
	cout << "Zadaj vysku obdlznika: ";
	cin >> d; 
    for (int b = 1; b <= d; b++){
        for (int c = 1; c <= a; c++){
            cout << "# ";
        }
        cout << endl;
	}
	cout << "\n";
	
	cout << "7 uloha \n";
	cout << "Zadaj vysku obdlznika: ";
    cin >> a;
	cout << "Zadaj sirku obdlznika: ";
	cin >> d; 
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= d; c++){
            cout << "# ";
        }
        cout << endl;
	}
	cout << "\n";
	
	return 0;
}

