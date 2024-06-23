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
    
	s = matica[m-1][0];
    
    for (int i = 0; i < n; i++){
    	if(s > matica[m-1][i]){
    	    s = matica[m-1][i];
		}
	}
	cout << "Minimum posledneho riadku: " << s << endl;

	return 0;
}
