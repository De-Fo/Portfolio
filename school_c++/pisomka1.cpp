#include <iostream>

using namespace std;

int main() {
	
	int a, b;
	float e, f;
	
    cout << "Ahoj" << endl;
    cout << "Volam sa Peter" << endl;
    cout << "Byvam na ulici slnecnej" << endl;
    cout << "V Namestove." << endl;
    
    cout << "Zadaj cele cislo a" << endl;
    cin >> a;
    cout << "Celociselna premenna a je: " << a << endl;
    
    cout << "Zadaj cele cislo b" << endl;
    cin >> b;
    cout << "Celociselna premenna b je: " << b << endl;
    
    cout << "Sucet je " << a + b << endl;
    cout << "Rozdiel je " << a - b << endl;
    cout << "Sucin je " << a * b << endl;
    cout << "Podiel celych cisel je " << a/b << endl;
    cout << "Zvysok po deleni celych cisel je " << a % b << endl;
    
    cout << "Zadaj realne cislo e" << endl;
    cin >> e;
	cout << "Premenna e je: " << e << endl;
    
	cout << "Zadaj realne cislo f" << endl;
    cin >> f;
    cout << "Premenna f je: " << f << endl;
    
    cout << "Realny sucet je " << e + f << endl;
    cout << "Realny rozdiel je " << e - f << endl;
    cout << "Realny sucin je " << e * f << endl;
    cout << "Realny podiel je " << e/f << endl;
    
    return 0;
}

