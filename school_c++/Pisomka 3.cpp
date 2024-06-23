#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    int a, b, c, d, e, f, g, n, m, x, y, w, r, t, o, p, q;
    g = 1;
    n = 1;
    cout << "|Uloha 1| Generovanie teplot v mesiaci februar v intervale (-10 az 5)\n";
    srand(time(NULL));
    for (int i = 1; i < 29; i++){
    a = rand();
    b = a % 16 - 10;
    cout << i << ". Februar: " << b << " stupnov celsia" << endl;

}
    cout << endl;
    
    
	cout << "|Uloha 2| Vypis cisel matice\n";
	cout << "Zadaj pocet riadkov a stlpcov\n";
    cin >> e;
    for (r = 0; r < e; r++){
        for (t = 0; t < e; t++){
			cout << r-t << " ";
        }
        cout << endl;
	}
	cout << endl;
	
	cout << "|Uloha 3| Zadaj pocet cisel pre cyklus: ";
	cin >> f;
	while(g <= f){
		cout << g << ". krok medzisuctu cisel je: " << n << endl;
		g += 1;
		n += g;
	}
	cout << "Celkovy sucet je: " << n - g << endl;



    cout << "|Uloha 4| Zadaj cislo od 2 po 9: ";
	cout << endl;
	cin >> m;
    p = 100;
    for (o = 1; o <= p; o++){
        if (o / 10 == m){
        	cout << "	" << "*";
		}
		else {
			cout << "	" << o;
		}
		
		if (o% 10 == 0){
			cout << "	" << endl;
		}   
}

    cout << "|Uloha 5| najvacsi spolocny delitel\n";
    cout << "Zadaj prve cislo" << endl;
   	cin >> x;  
   	cout << "Zadaj druhe cislo" << endl;
   	cin >> y;
   
   	while (true){
   		for(w=1; w <= x && w <= y; w++) {
      		if(x%w==0 && y%w==0) {
         	c = w;
      		}
   		}
   cout << "Najvacsi spolocny delitel " << x << " a " << y << " je " << c << endl;
   break;
}
}
