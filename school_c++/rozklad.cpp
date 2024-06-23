#include<bits/stdc++.h>

using namespace std;

int Rozklad(){

	int a, b;
	cout << "Zadaj cislo: ";
	cin >> a;
	b = a;
	cout << b << " = ";
	for(int i = 2; i <=a; i++){
		
		while (a % i == 0){
			
				cout << i;
				a = a / i;
				i = 2;	
					
					if(a > 1){
						cout << " * ";
					}
		}
	}
}

int main()
{
	
	Rozklad();

	return 0;
}

