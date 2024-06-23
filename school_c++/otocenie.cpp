#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(time(0));
	int a;
	cout << "Zadaj pocet generovanych cisiel: ";
	cin >> a;
	
	int z[a];
	int n = sizeof(z) / sizeof(z[0]);
	
	for (int i = 0; i < a; i++) {
		z[i] = rand() % 10;
		cout << z[i] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < a/2; i++){
		int f = z[i];
		z[i] = z[n-i-1];
		z[n-i-1] = f;
	}
	
	for (int i = 0; i < a; i++){
		cout << z[i] << " ";
	}
	
	
    return 0;
}

