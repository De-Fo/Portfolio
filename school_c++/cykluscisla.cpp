#include <iostream>

using namespace std;

int main() {
	int a, d;
	
    cout << "1 uloha \n";
	cout << "Zadaj pocet riadkov pre stvorec: ";
    cin >> a;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
			cout << b << " ";
        }
        cout << endl;
	}
	cout << "\n";
	
    cout << "2 uloha \n";
	cout << "Zadaj pocet riadkov pre stvorec: ";
    cin >> a;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
			cout << c << " ";
        }
        cout << endl;
	}
	cout << "\n";
	
	cout << "3 uloha \n";
	cout << "Zadaj pocet riadkov pre stvorec: ";
    cin >> a;
    for (int b = 0; b <= a; b++){
        for (int c = 0; c <= a; c++){
			cout << b+c << " ";
			
        }
        cout << endl;
	}
	cout << "\n";
	
	cout << "4 uloha \n";
	cout << "Zadaj pocet riadkov pre stvorec: ";
    cin >> a;
    for (int b = 0; b <= a; b++){
        for (int c = 0; c <= a; c++){
			cout << b-c << " ";
        }
        cout << endl;
	}
	cout << "\n";
	
	cout << "5 uloha \n";
	cout << "Zadaj pocet riadkov pre stvorec: ";
    cin >> a;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
			cout << b*c << " ";
        }
        cout << endl;
	}
	cout << "\n";
	return 0;
}

