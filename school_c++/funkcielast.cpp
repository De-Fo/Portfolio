#include <iostream>
#include <cmath>

using namespace std;

int umocnenie() {
	int a, b, v;
	cout << "Zadaj zaklad mocniny a exponent" << endl;
	cout << "Zaklad: ";
	cin >> a;
	cout << "Exponent: ";
	cin >> b;
	v = pow(a, b);
	cout << a << "^" << b << " = " << v << endl;
}

int obrazce1() {
	int a;
	cout << "Zadaj pocet hviezdiciek: ";
	cin >> a;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			cout << "* ";
		}
		cout << endl;
	}	
	cout << endl;
	
    for(int i = 0; i < a; i++) 
    {
    	for(int j = 0; j < a; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1) {
                cout << "* ";
            }
            
            else {
                cout << "  ";
            } 
        }
        cout << endl;
    }		
	
}

int obrazce2(){
	int a, b, c;
	cout << "Zadaj sirku: ";
	cin >> a;
	cout << endl;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			cout << "* ";
		}
		cout << endl;
	}	
	cout << endl;
	
	cout << "Pravouhly trojuholnik" << endl;
	
	for(int i = 0; i < a; i++){
			b = a-i;
			cout << string(b, '*');
			cout << endl;
	}	
	cout << endl;
	
	cout << "Pravouhly trojuholnik naopak" << endl;
	
	for(int i = 0; i <= a; i++){
			c = a-i;		
			cout << string(c, ' ');
			cout << string(i, ' *');
			cout << endl;
	}	
	
}


int main() {
    umocnenie();
    obrazce1();
    obrazce2();
    return 0;
}

