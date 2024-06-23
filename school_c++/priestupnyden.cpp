#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Vpis rok" << endl;
    cin >> a;
    
    b = 4;
    
    if (a % b == 0) {
    	cout << "Rok " << a << " ma priestupny den" << endl;
	}
	else {
		cout << "Rok " << a << " nema priestupny den" << endl;
	}
    return 0;
}
