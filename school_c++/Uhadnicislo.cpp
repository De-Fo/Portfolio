#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int hadaj(){
	srand(time(NULL));
	int a = rand() % 100;
	int b;
	cout << "Uhadni nahodne cislo v rozsahu 1 az 100" << endl;
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

int main() {
    hadaj();
    return 0;
}

