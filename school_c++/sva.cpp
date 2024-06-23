#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, f, e, p, x, m, n, o, z, q, h, s;
    cout << "Zadaj body studentov\n";
    b = 0;
    a = 1;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    m = 1;
    n = 0;
	z = 0;
    q = 0;
    h = 6;
    s = 1;
    o = 0;
    while (a > 0){
    	cout << "Student c. "<< b + 1 << ": ";
    	cin >> a;
    	b += 1;
    	x += a;
    
    if (a >= 90 && a <= 100){
    	c += 1;
	}
	else if (a > 100 && a <= 110){
    	d += 1;
	}
	else if (a > 110 && a <= 120){
    	e += 1;
	}
	else if (a > 120){
		f += 1;
	}
	p = x / (b-1);
}

	cout << "Priemerne IQ je: " << p << endl;
	cout << endl;
	cout << " 90 ... 100" << "\t" << " 101 ... 110" << "\t" << " 111 ... 120" << " \t" << "nad 120 ...\n";
	cout << endl;
	cout << "\t" << c << "\t \t" << d << "\t \t" << e << "\t \t" << f << endl;	
	
	cout << "Zadaj znamky jednotlivych rozhodcov\n";
		
	 while (m >= 1){
    	cout << n + 1 << " Znamka: ";
    	cin >> m;
    	n += 1;
    	o += m;	
    	
    	if (m > s){
    		s = m;
		}
		if (m < h && m >= 1){
			h = m;
		}
}
    	z = o / (n-1);

	cout << "Najhorsia znamka je: " << h << ", najlepsia znamka je: " << s << endl;
	cout << "Priemerna znamka je: " << z << endl;

    return 0;
}
