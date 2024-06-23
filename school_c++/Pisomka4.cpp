#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <algorithm>

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
    a = rand() % 10;
    cout << i << ". prvok pola " << a << endl;
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
	cout << endl;
	cout << "TEPOLOTY" << endl;

    int x, z, f, p;
    double y;
    srand(time(NULL));
    cout << "Zadaj pocet dni: ";
	cin >> f;
    for (int i = 1; i <= f; i++){
    x = rand();
    y = x % 21 - 10;
    cout << "Teplota c. " << i << " je " << y <<" stupnov Celsia" << endl;
    z += y;
	p = z/f;
	
}
	cout << "Priemer teplot je " << p << endl;
	cout << endl;	
	int j;
	int i;
	j = 10;
	srand (time(0));
	int k[j], w; 
	double se, pr;
    cout << "prvky pola: " << endl;
    for(int i=0; i<10; i++){
    	k[i]= rand()% 10 + 1;
		cout<< k[i] << "  ";
		se += k[i];
	}
	cout << endl;
	pr = se/10;
	cout << "Priemer pvrkov pola je: " << pr << endl;
	cout << "=======================================" << endl;
	cout << endl;
	
	cout << "Uloha 4" << endl;
	cout << "krasokorculovanie znamky: " << endl;
		    
	float aa, cc, dd, mmax, mmin, pp, ss;
	int bb;
    mmax = 0;
    mmin = 6;
	bb = 6;
    int arra [bb];
    
    srand(time(NULL));
    for (int i = 0; i < 6; i++){
    aa = rand() % 6 + 1;
    cout << i << ". znamka " << aa << endl;
	arra [i] = aa;
	ss += aa;
	pp = ss/6;
	if (aa > mmax){
		mmax = aa;
		cc = i;
	}
	
	if (aa < mmin){
		mmin = aa;
		dd = i;
	}
	
	}
	cout << "Maximum: " << mmax << endl;
	cout << "Minimum: " << mmin << endl;
	cout << "Priemer: " << pp << endl;
	cout << endl;
	
	
	
	cout << "Toto su vysky 13 ludi:" << endl;
	int aaa, bbb, ccc, ddd, s1;
    bbb = 13;
    int arrac [bbb];
    
    srand(time(NULL));
    for (int i = 0; i < bbb; i++){
    aaa = rand() % 51 + 150;
    cout << aaa << "	";
	arrac [i] = aaa;
	s1 = arrac [i/2];
	}
	cout << endl;
	cout << "Toto je 7. vyska: " << s1 << endl;
	cout << endl;
    return 0;
}	
