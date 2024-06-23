#include <iostream>
#include <cmath>
#include <ctime>
#include <stdlib.h>

using namespace std;

int uhadnicislo(){
	srand(time(NULL));
    cout << "ULOHA 1:" << endl;
    cout << "Uhadni cislo (od 101 - po 200), ktore vygeneroval pocitac!" << endl;
	int a = rand() % 99 + 101;
	int b;
	while (a != b){
		cin >> b;
		if (a == b){
			cout << "uhadol si je to: " << a << endl;
		}
		else if (a > b){
			cout << "cislo je vacsie ako " << b << endl;
		}
		else if (a < b){
			cout << "cislo je mensie ako " << b << endl;
		}
}
}


int pocitaj(){
	float a, b;
	cout << "Uloha 2:" << endl;
	cout << "Zadaj prve cislo: ";
	cin >> a;
	cout << "Zadaj druhe cislo: ";
	cin >> b;
	cout << "Sucet cisel " << a << " a " << b << " je: " << a+b << endl;
	cout << "Rozdiel cisel " << a << " a " << b << " je: " << a-b << endl;
	cout << "Sucin cisel " << a << " a " << b << " je: " << a*b << endl;
	cout << "Podiel cisel " << a << " a " << b << " je: " << a/b << endl;
}

int stvorec(){
	int a;
	cout << "Uloha 3:" << endl;
	cout << "Zadaj pocet hviezdiciek: ";
	cin >> a;
	cout << "Prazdny stvorec" << endl;

	 for(int i = 0; i < a; i++) 
    {
    	for(int j = 0; j < a; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            } 
        }
        cout << endl;
    }		
}

int faktorial(){
	int a, b, c;
	cout << "Uloha 4:" << endl;
	cout << "Zadaj cislo x pre vypocet faktorialu: ";
	cin >> a;
	c = a;
	b = 1;
	for(int i = 1; i < a; a--){
		b = b * a;
	}
	cout << "Faktorial cisla " << c << " je: " << b << endl;
	cout << endl;
}


int pole[10];


int zn(){
	cout << "Uloha 5:" << endl;
	srand(time(0));
	for (int i=0; i < 10; i++)
		pole[i] = rand() % 10 + 1;
}

int znn(){
int max = 0;
int min = 10;
	for (auto x : pole){
		if(x > max){
			max = x;
		}
		if(x < min){
			min = x;
		}
		cout << x << "\t";	
}
	cout << endl;
	cout << "Maximum je: " << max << endl;
	cout << "Minimum je: " << min << endl;	
	cout << "Pozicia maxima je: " << endl;
	cout << "Pozicia minima je: " << endl;	
}



int main() {
	uhadnicislo();
	pocitaj();
	stvorec();
	faktorial();
	zn();
	znn();
    return 0;
}

