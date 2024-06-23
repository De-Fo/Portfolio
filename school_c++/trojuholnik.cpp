#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b ,c;
	cout << "Zadaj strany trjuholnika: ";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && c + b > a){
		cout << "Trojuholnik existuje." << endl;
	
	
		if (a == b && a == c && b == c){
			cout << "Rovnostranny" << endl;
		}	
		
		else if (a == b && b == c){
			cout << "Rovnoramenny" << endl;
		}
		
		else if (pow(a,2) + pow(b,2) == pow(c,2)){
			cout << "Pravouhly" << endl;
		}
		
		else {
			cout << "Vseobecny" << endl;
		}
	}
	else {
		cout << "Trojuholnik neexistuje." << endl;
	}
	return 0;
}

