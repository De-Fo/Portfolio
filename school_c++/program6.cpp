#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    int a, b, c, d, max, min;
    max = 0;
    min = 100;
    cout << "Zadaj pocet cisel: ";
    cin >> b;
    cout << endl;
    int array [b];
    
    srand(time(NULL));
    for (int i = 0; i < b; i++){
    a = rand() % 100;
    cout << i << ". vygenerovane cislo " << a << endl;
	array [i] = a;
	
	if (a > max){
		max = a;
		c = i;
	}
	
	if (a < min){
		min = a;
		d = i;
	}
	}
	cout << "Maximum: " << max << " na pozicii " << c << endl;
	cout << "Minimum: " << min << " na pozicii " << d << endl;
    return 0;
}	
