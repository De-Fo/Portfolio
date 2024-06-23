#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, f;
	b = 0;
	cout << "Zadaj pocet hviezdiciek: " << endl;
    cin >> a;
    f = a;
    while (b < a){
    	b++;
    	f--;
    	cout << string(f, ' ') << string(b, '*') << endl;
	}
	cout << endl;
	cout << "Zadaj pocet hviezdiciek: " << endl;
    d = 1;
	cin >> c;
    while (d <= c){
    	cout << string(c, '*') << endl;
    	c--;
	}
	cout << "Compilation time: 0,000000000000000000000000000000000000000000000000001s" << endl;
    return 0;
}
