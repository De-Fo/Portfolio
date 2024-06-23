#include <iostream>
#include <cmath>

using namespace std;

int main() {


    float a, b, c, x1, x2, D;
    cout << "Vpis a b c (hodnoty predpisu kvadratickej rovnice): ";
    cin >> a >> b >> c;
    D = b*b - 4*a*c;
    
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout << "Korene kvadratickej rovnice: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (D == 0) {
        cout << "Kvadraticka rovnica ma iba 1 odpoved" << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
		cout << "Kvadraticka rovnica nema riesenie." << endl;
	}
	
	return 0;
}
