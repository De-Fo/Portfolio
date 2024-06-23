#include<bits/stdc++.h>

using namespace std;

int main() {
    
	int a, b, c, x, y;
	cout << "Najmensi spolocny nasobok 2 cisel" << endl;
	cout << "Zadaj dve cisla" << endl;
	cin >> a >> b;
	x = a;
	y = b;
	while (a != b){
		if (a > b){
			a -= b;
		}
		else{
			b -= a;
			
		}	
	}
	if (a == b){
		c = (x * y) / a;
		cout << "NSN cisel " << x << " a " << y << " je: " << c << endl;
	}
	
	
	return 0;
}