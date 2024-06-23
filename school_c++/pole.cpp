#include<bits/stdc++.h>

using namespace std;

int main() {
    srand(time(NULL));

    int a;
    cout << "Zadaj pocet cisel: ";
    cin >> a;

    int b[a];
    int x[a], y[a];
    int kladne = 0, zaporne = 0, nula = 0;

    for (int i = 0; i < a; i++){
    	
        b[i] = rand() % 21 - 10;
        cout << b[i] << ", ";

        if (b[i] > 0){
            kladne += 1;
            x[kladne - 1] = b[i];
		}

		else if (b[i] < 0){
            zaporne += 1;
            y[zaporne - 1] = b[i];
		}
			
			else{
            nula += 1;
        }
    }

    cout << endl;
    cout << endl;

    sort(x, x + kladne);
	sort(y, y + zaporne);

    cout << "Pocet kladnych cisel je: " << kladne << ". Su to cisla: ";
    
    	for(int i = 0; i < kladne; i++){
        	cout << x[i] << ", ";
    	}

    cout << endl;
    cout << endl;
    
    cout << "Pocet zapornych cisel je: " << zaporne << ". Su to cisla: ";
    
    	for(int i = 0; i < zaporne; i++){
    	
        	cout << y[i] << " ";
    	}

    cout << endl;
    cout << endl;
    
    cout << "Pocet 0 je: " << nula << endl;

    return 0;
}
