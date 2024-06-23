#include <iostream>

using namespace std;

int main() {
	
    double pi, a;
    cout << "Vloz velkost strany stvorca" << endl;
    cin >> a;
    pi = 3.14159265359;
    cout << "plocha okolo vpisanej kruznice sa rovna:" << endl;
    cout << (a*a) - (pi*((a/2)*(a/2)))<< endl;
    return 0;   
}
