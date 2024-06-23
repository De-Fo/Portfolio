#include<bits/stdc++.h>

using namespace std;

int main(){

	double a, b, c, d;
	cout << "BMI kalkulacka" << endl;
	cout << "Zadaj hmotnost v kg: ";
	cin >> a;
	cout << "Zadaj hmotnost v cm: ";
	cin >> b;
	cout << endl;
	b = b / 100;
	c = a / pow(b, 2);
	cout << "Moje BMI je: " << setprecision(4) << c << endl;
	cout << endl;
	
	if(c <= 18.5){
		cout << "podvyziva" << endl;
	}
	
	else if(c > 18.5 && c <= 25){
		cout << "idealna a zdrava vaha" << endl;
	}
	
	else if(c > 25 && c <= 30){
		cout << "mierna nadvaha" << endl;
	}
	
	else if(c > 30 && c <= 40){
		cout << "obezita" << endl;
	}
	
	else if (c > 40){
		cout << "tazka obezita" << endl;
	}
	
	return 0;
}

