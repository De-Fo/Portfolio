#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int pole[10];
int maxc = 0;
int minc = 10;

int Nacitaj(){
	srand(time(0));
	for (int i=0; i < 10; i++)
		pole[i] = rand() % 10 + 1;
}

int Vypis(){
	for (auto x : pole)
		cout << x << "\t";
	cout << endl;
}

int Ciara(){
	cout << "--------------------------------------------------------------------------" << endl;
}


int Max(){
	for (auto x: pole)
		maxc = (x > maxc) ? x : maxc;
	cout << "maxcimum je: " << maxc << endl;
}


int Min(){
	for (auto x: pole)
		minc = (x < minc) ? x : minc;
	cout << "Minimum je: " << minc << endl;
}


int Pozicia(){
	for (int i=0; i<10; i++){
		if (pole[i] == maxc){
			cout << "maxcimum je na pozicii: " << i << endl;	
		}
	}
	for (int i=0; i<10; i++){
		if (pole[i] == minc){
			cout << "minimum je na pozicii: " << i << endl;
		}
	}
}


int main()
{
	Nacitaj();
	Vypis();
	Ciara();
	Max();
	Min();
	Pozicia();
	return 0;
}

