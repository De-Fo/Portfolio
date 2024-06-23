#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cout << "NSN" << endl;
	cout << "Zadaj dve cisla" << endl;
	cin >> a >> b;
	
	while (a != b){
		if (a > b){
			a -= b;
		}
		else{
			b -= a;
			
		}	
	}
	if (a == b){
		cout << a << endl;
	}
	return 0;
}

