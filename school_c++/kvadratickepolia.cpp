#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int generateRandomInt(int minVal, int maxVal) {
    return rand() % (maxVal - minVal + 1) + minVal;
}
 
 
int main() {
	int f;
    srand(time(nullptr));
    cout << "Zadaj pocet kv. rovnic: ";
 	cin >> f;
    const int numE = f;
    int a[numE];
    int b[numE];
    int c[numE];
    int numRoots[numE];
    int x1[numE];
    int x2[numE];
    int discr[numE];
 
    for (int i = 0; i < numE; i++) {
        a[i] = generateRandomInt(-10, 10);
        b[i] = generateRandomInt(-10, 10);
        c[i] = generateRandomInt(-10, 10);
    
	discr[i] = b[i] * b[i] - 4 * a[i] * c[i];
 
    if (discr[i] < 0) {
        numRoots[i] = 0;
    }
    else if (discr[i] == 0) {
        numRoots[i] = 1;
        x1[i] = -b[i] / (2 * a[i]);
    }
    else {
        numRoots[i] = 2;
        x1[i] = (-b[i] + sqrt(discr[i])) / (2 * a[i]);
        x2[i] = (-b[i] - sqrt(discr[i])) / (2 * a[i]);
    }
}
 
 
 
    for (int i = 0; i < numE; i++) {
        cout << "Rovnica " << i + 1 << ": " << a[i] << "x^2 + " << b[i] << "x + " << c[i] << endl;
 
        if (numRoots[i] == 0) {
            cout << "nema korene" << endl;
        }
        else if (numRoots[i] == 1) {
            cout << "x = " << x1[i] << endl;
        }
        else {
            cout << "x1 = " << x1[i] << ", x2 = " << x2[i] << endl;
        }
        cout << "Diskriminant: " << discr[i] << endl;
    }
 
    cout << "a: ";
    for (int i = 0; i < numE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
 
    cout << "b: ";
    for (int i = 0; i < numE; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
 
    cout << "c: ";
    for (int i = 0; i < numE; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
 
    cout << "x1: ";
     for (int i = 0; i < numE; i++) {
        cout << x1[i] << " ";
    }
    cout << endl;
    
        cout << "x2: ";
     for (int i = 0; i < numE; i++) {
        cout << x2[i] << " ";
    }
    cout << endl;
    
	return 0;    
}

