#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c, d, e;
    cout << "1 uloha: \n";
    a = 10;
    d = 1;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
            cout << d << "	";
            d++;
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "2 uloha: \n";
    a = 10;
    d = 1;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
            cout << setw(4) << d;
            d++;
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "3 uloha: \n";
	cout << "Zadaj cislo od 2 po 9: ";
	cout << endl;
	cin >> e;
    a = 100;
    for (int i = 1; i <= a; i++){
        if (i % 10 == e){
        	cout << setw(4) << "*";
		}
		else {
			cout << setw(4) << i;
		}
		
		if (i % 10 == 0){
			cout << setw(4) << endl;
		}
}
    cout << "4 uloha: \n";
	cout << "Zadaj cislo od 2 po 9: ";
	cout << endl;
	cin >> e;
    a = 100;
    for (int i = 1; i <= a; i++){
        if (i % e == 0){
        	cout << setw(4) << "*";
		}
		else {
			cout << setw(4) << i;
		}
		
		if (i % 10 == 0){
			cout << setw(4) << endl;
		}   
}

    cout << "5 uloha: \n";
	cout << "Zadaj cislo od 2 po 9: ";
	cout << endl;
	cin >> e;
    a = 100;
    for (int i = 1; i <= a; i++){
        if (i / 10 == e){
        	cout << setw(4) << "*";
		}
		else {
			cout << setw(4) << i;
		}
		
		if (i % 10 == 0){
			cout << setw(4) << endl;
		}   
}

	cout << "uloha huiomagico65 (= pocet medzier medzi ciselkami): \n";
	cout << "Zadaj cislo od nevidim po nevidim: ";
	cout << endl;
	cin >> e;
    a = 10;
    d = 1;
    for (int b = 1; b <= a; b++){
        for (int c = 1; c <= a; c++){
            cout << setw(e) << d;
            d++;
        }
        cout << endl;
    }
    
    return 0;
}
