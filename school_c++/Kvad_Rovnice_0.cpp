#include<bits/stdc++.h>

using namespace std;

int linearna(double a, double b)
{
	double x;
	
	cout << "Toto nieje Kvadraticka Rovnica" << endl;
	
	if (a == 0){
		
        if (b == 0){
            cout << "Nekonecno riesni" << endl;
        }
        
		else{
            cout << "Ziadne riesenia" << endl;
		}
	
	}
	
    else{
        x = -b / a;
        cout << "Jedno riesenie" << x << endl;
	}

}

int kvadraticka(double a, double b, double c){
		
	double D = sqrt(b * b - 4 * a * c);

    if (D >= 0) {
        double x1 = (-b + D) / (2 * a);
        double x2 = (-b - D) / (2 * a);

        cout << "Dve riesenia: x1 = " << x1 << ", x2 = " << x2 << endl;
    } 
	
	else {
        double realna = -b / (2 * a);
        double nerealna = sqrt(-D) / (2 * a);

        cout << "komplexne riesenie x1 = " << realna << " + " << nerealna << "i, x2 = " << realna << " - " << nerealna << "i" << endl;
    }
}

int main(){
	
	cout << "Equation Solver" << endl;
    cout << "Zadaj korene Kvadratickej Rovnice: ";
   	double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
    	
        double a, b;
        a = b;
        b = c;
		cout << "a: " << a << " b: " << b << endl;
        linearna(a, b);
        
    } else if (a != 0 && b != 0 && c != 0) {
    	
        double a, b, c;
        a = a;
        b = b;
        c = c;
        cout << "a: " << a << " b: " << b << " c: " << c << endl;
        kvadraticka(a, b, c);
        		
    } else {
        cout << "Zly vstup" << endl;
    }

    return 0;
}

