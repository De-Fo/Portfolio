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
	
	int b;
	cout << "Zadaj posun pola: ";
	cin >> b;
	
	int x[n];
	
	
	for(int i = 0; i < n; i++){
		
		int z = (i + b) % n;
		
		z = (z + n) % n;
		
		x[z] = a[i];
		
	}
	
	
	for(int i = 0; i < n; i++){
		cout << x[i] << " ";
	}

	return 0;
}

