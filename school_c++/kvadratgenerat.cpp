#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  double a, b, c, x, x1, x2, D;
  srand(time(0));
  cout<< "Zadaj pocet kvadratickych rovnic: ";
  cin >> x;
  cout << endl;
  for (int i = 0; i < x+1; i++){
	a = rand() % 21;
  	b = rand() % 15 + 16;
  	c = rand() % 20 - 31;
	
	cout << i << ". Kvadraticka rovnica: " << a << "x^2 + " << b << "x" << c << endl;
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
        x1 = -b / (2 * a);
        cout << "x1 = x2 = " << x1 << endl;
    }

    else {
		cout << "Kvadraticka rovnica nema riesenie." << endl;
	}
	cout << endl;
}


  return 0;
}

