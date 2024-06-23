#include<bits/stdc++.h>

using namespace std;

int main()
{

	int m, n, s;
    cout << "Zadaj rozmery matice m x n: ";
    cin >> m >> n;

    int matica[m][n];

    srand(time(0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matica[i][j] = rand() % 9 - 4;
            cout << setw(4) << matica[i][j];
        }
    	cout << endl;
    }
    
    cout << "Transponovana matica: " << endl;

	for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << setw(4) << matica[i][j];
        }
    	cout << endl;
    }
    
	

	return 0;
}
