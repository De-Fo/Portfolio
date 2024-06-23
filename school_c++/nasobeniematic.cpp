#include<bits/stdc++.h>

using namespace std;

int main()
{

	int m, n;
    int b;
    cout << "Zadaj rozmery matice A v tvare m x n: ";
    cin >> m >> n;
    cout << endl;
    int matica[m][n];
    int matics[n][b];

    srand(time(0));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            matica[i][j] = rand() % 9 - 4;
            cout << setw(4) << matica[i][j];
        }
    	cout << endl;
    }
    cout << endl;
    cout << "Teraz zoberieme n z matice A, ktora bude predstavovat pocet riadkov matice B, zadavame teraz pocet stlpcov matice B:";
    
    cin >> b;
    cout << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < b; j++){
            matics[i][j] = rand() % 9 - 4;
            cout << setw(4) << matics[i][j];
        }
    	cout << endl;
    }
    cout << endl;

    int sucin[m][b];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < b; j++){
            sucin[i][j] = 0;
            for (int k = 0; k < n; k++){
                sucin[i][j] += matica[i][k] * matics[k][j];
            }
        }
    }





    cout << "Sucin A x B:" << endl;
    cout << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < b; j++){
            cout << setw(4) << sucin[i][j];
        }
        cout << endl;
    }

    cout << endl;

	return 0;
}
