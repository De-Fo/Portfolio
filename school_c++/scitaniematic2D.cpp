#include<bits/stdc++.h>

using namespace std;

int m, n, m1, n1, A[20][20], B[20][20], C[20][20];
char opakuj = 'a';

int NACITAJ(int m, int n, int X[20][20]){
	
	srand(time(NULL));
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			X[i][j] = rand() % 9 - 5;
		}
	}	
	
}


int VYPIS(int m, int n, int X[20][20]){
	
	srand(time(NULL));
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << "\t" << X[i][j] ;
		}
		cout << endl << endl;
	}	
	
}

void SUCET() {
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            A[i][j] += B[i][j];
        }
    }
}


int main()
{

	while(opakuj == 'a'){
	cout << "Zadaj rozmery matice A: ";
	cin >> m >> n;
	cout << endl;
	NACITAJ(m, n, A);
	VYPIS(m, n, A);
	
	cout << "Zadaj rozmery matice B: ";
	cin >> m1 >> n1;
	cout << endl;
	NACITAJ(m1, n1, B);
	VYPIS(m1, n1, B);
	
	if(m == m1 && n == n1){
		cout << "Sucet A + B: " << endl;
		SUCET();
		VYPIS(m, n, A);
	}
	
	cout << "Ak chces pokracovat stlac a: ";
	cin >> opakuj;
}

	return 0;
}

