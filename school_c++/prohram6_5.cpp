#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    int a, b, s1, s2, f;
    f = 0;
    while(f==0){
    cout << "Zadaj pocet prvkov: ";
    cin >> b;
    cout << endl;
    int array [b];
    srand(time(NULL));
    for (int i = 0; i < b; i++){
    a = rand() % 100;
    cout << a << "	";
	array [i] = a;
	s1 = array[i/2];
	s2 = array[i/2+1];
	}
	cout << endl;
	if (b%2==0){
		cout << "V strede je cislo: " << s1 << " a " << s2 << endl;
	}
	else if (b%2==1){
		cout << "V strede je cislo: " << s1 << endl;
	}
	cout << "Ak chces pokracovat stlac [0]: ";
	cin >> f;
	} 
    return 0;
}
