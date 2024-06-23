#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int a, s, b, c, p, max, min;
    max = -12;
    min = 9;
    srand(time(NULL));
    for (int i = 1; i < 32; i++){
    a = rand();
    b = a % 22 - 12;
    cout << i << " hodnota " << b << " stupnov celsia" << endl;
    s += b;
	p = s/31;
	
	if (b > max){
		max = b;
	}
	
	if (b < min){
		min = b;
	}
}
	cout << "Sucet teplot " << s << endl;
	cout << "Priemer teplot " << p << endl;
	cout << "Maximalna teplota " << max << endl;
	cout << "Minimalna teplota " << min << endl;
    return 0;
}
