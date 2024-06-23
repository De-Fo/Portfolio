#include<bits/stdc++.h>

using namespace std;

int main(){

	double a, b, c, d, e ,f;
	double x, y, v, k, n, m;
	double a1, b1, c1;
	double obsah, s;

	cout << "Zadaj suradnice bodu A: ";
	cin >> a >> b;
	
	cout << "Zadaj suradnice bodu B: ";
	cin >> c >> d;
	
	cout << "Zadaj suradnice bodu C: ";
	cin >> e >> f;
	
	x = c - e;
	y = d - f;
	v = e - a;
	k = f - b;
	n = a - c;
	m = b - d;
	
	a1 = sqrt(pow(x, 2) + pow(y, 2));
	b1 = sqrt(pow(v, 2) + pow(k, 2));
	c1 = sqrt(pow(n, 2) + pow(m, 2));
	
	cout << endl;
	if (a1 + b1 > c1 && a1 + c1 > b1 && b1 + c1){
		cout << "Trojuholnik existuje" << endl;
	}
	else{
		cout << "Trojuholnik neexistuje" << endl;
	}
	
	
	cout << endl;
	cout << "Strany trojuholnika su: a = " << setprecision (2) << fixed << a1 << " , b = "<< b1 << " , c = "<< c1 << endl;
	cout << endl;
	cout << "Obvod trojuholnika je: " << a1 + b1 + c1 << endl;
	cout << endl;
	s = (a1 + b1 + c1) / 2;
	obsah = sqrt(s*(s-a1)*(s-b1)*(s-c1));
	
	cout << "Obsah trojuholnika je: " << obsah << endl;
	
	
	return 0;
}

