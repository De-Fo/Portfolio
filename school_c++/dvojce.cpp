#include<bits/stdc++.h>

using namespace std;

int main()
{


	int n;
	cout << "Zadaj pocet prvkov pola: ";
	cin >> n;
    int a[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++){
    	
        a[i] = rand() % 10 + 1;
        cout << a[i] << " ";
    }
	
	cout << endl;
	cout << endl;
	
	int x;
	int b;
	b = 0;
	cout << "Zadaj sucet: ";
	cin >> x;
	
	for(int i = 0; i < n; i++){
		
		for(int j = i + 1; j < n; j++){
			
			if(a[i] + a[j] == x){
				cout << a[i] << " + " << a[j] << " = " << x << endl;
				b ++;
			}
		}
	} 
	
	cout << endl;
	cout << endl;
	
	cout << "Poced dvojic: " << b << endl;
	
	return 0;
}

