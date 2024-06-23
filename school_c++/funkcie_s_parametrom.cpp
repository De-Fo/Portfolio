#include<bits/stdc++.h>

#define F(x) x*x -2*x + 4

using namespace std;

int main()
{
	string state = "a";
	int a, b, c, d, f, x;
	
	d = 1;
	
	while(state == "a"){
		cout << "Predpis funkcie je f: x^2 -2x + 4" << endl;
		cout << "Zadaj hranice intervalu: ";
		cin >> a >> b;
		if (a > b){
			cout << "Zadal si zle hranice intervalu." << endl;
			cout << "Ak chcete zadat znova hranice intervalu, stlac 1: ";
			cin >> d;
			if (d == 0){
				state = "b";
			}
			else {
				break;
			}
		}
		
		cout << setw(3) << "x" << "F(x)" << endl;
		cout << "----------------------";
		for (int i = a-1; i <= b; i++){
			cout << setw(i) << a << setw(3) << F(i) << endl;
		}
		
		
		
		
		if (d != 1){
			cout << endl;
		}
		
		else {
		cout << "Ak chces pokracovat, stlac (a): ";
		cin >> state;
		}
	}

	return 0;
}

