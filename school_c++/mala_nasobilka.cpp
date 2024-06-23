#include<bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, d, e;
	double h, g, f, x;
	cout << "Zadaj pocet prikladov: ";
	cin >> d;
	g = 0;
	f = 0;
	h = 0;
    srand(time(NULL));
    while (d > 0){
    	a = rand()%11;
    	b = rand()%11;
    	c = a * b;
    	cout << a << " * " << b << " = ";
		cin >> e;
		
		if (c != e){
			f++;
		} 
		else if (c == e){
			g++;
		}
		d--;
	}
	
	h = g + f;
	x = (g/h) * 100;
	cout << "Hodnotenie:" << endl;
	cout << "___________" << endl;
	cout << "Dobrych prikladov si mal: " << g << endl;
	cout << "Zlych prikladov si mal: " << f << endl;
	cout << "Dosiahol si: " << setprecision(2) << x << "%" << endl;
	
	if (x <= 100 && x >= 90){
		cout << "Vyborny vysledok" << endl;
	} 
	if (x <= 89 && x >= 75){
		cout << "Chvalitebny vysledok" << endl;
	} 
	if (x <= 74 && x >= 50){
		cout << "Dobry vysledok" << endl;
	} 
	if (x <= 49 && x >= 30){
		cout << "Dostatocny vysledok" << endl;
	} 
	if (x < 30){
		cout << "Katastrofa" << endl;
	} 
	
	return 0;
}

