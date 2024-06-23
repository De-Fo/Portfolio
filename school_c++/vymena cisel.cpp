#include<bits/stdc++.h>

using namespace std;

int main()
{
	int b, j;
	
	srand(time(NULL));
	int a[10];
	
	for(int c = 0; c < 11; c++){
		a[c] = rand() % 11;
		cout << "\t" << a[c];	
	}
	
	cout << endl;

	for(int i = 0; i <= 9; i++){
		
		for(j = 0; j <= 9; j++){
			
			if (a[j] < a[i]){
			b = a[j];
			a[j] = a[i];
			a[i] = b;
			
		}
	}
	cout << "\t" << a[i];	
}

	return 0;
}

