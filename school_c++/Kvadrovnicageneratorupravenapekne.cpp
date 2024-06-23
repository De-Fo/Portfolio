#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
  double a, b, c, x, x1, x2, D;
  srand(time(0));
  cout<< "Zadaj pocet kvadratickych rovnic: ";
  cin >> x;
  cout << endl;
  cout << "a" << "\t" << "b" << "\t" << "c" << "\t" << "D" << "\t" << "\t" << "x1" << "\t" << "x2" << endl;
  for (int i = 0; i < x+1; i++){
	a = rand() % 21;
  	b = rand() % 15 + 16;
  	c = rand() % 20 - 31;
	
  	D = b*b - 4*a*c;
  
      if (D > 0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout << fixed << setprecision(2) << a << "\t" << b << "\t" << c << "\t" << D << "\t" << "\t" << x1 << "\t" << x2 << endl;
    }
    
    else if (D == 0) {
        x1 = -b / (2 * a);
    	cout << fixed << setprecision(2) << a << "\t" << b << "\t" << c << "\t" << D << "\t" << "\t" << x1 << "\t" << x1 << endl;
    }

    else {
	    cout << fixed << setprecision(2) << a << "\t" << b << "\t" << c << "\t" << D << "\t" << "\t" << "-" << "\t" << "-" << endl;
	}
	cout << endl;
	
}


  return 0;
}

