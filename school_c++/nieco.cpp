#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, z;
	cout << "Zadaj pocet prvkov poli: ";
	cin >> x >> y >> z;
	int a[x], b[y], c[z];
	
	cout << "Polia" << endl;
    srand(time(NULL));
    
    cout << "a[" << x << "]: ";
    for(int i = 0; i < x; i++){
    	a[i] = rand() % 5 + 1;
		cout << a[i] << " ";
	}
	cout << endl;
	
	cout << "b[" << y << "]: ";
	for(int i = 0; i < y; i++){
    	b[i] = rand() % 5 + 1;
		cout << b[i] << " ";
	}
	cout << endl;
	
	cout << "c[" << z << "]: ";
	for(int i = 0; i < z; i++){
    	c[i] = rand() % 5 + 1;
		cout << c[i] << " ";
	}
	cout << endl;

	cout << "Spolocne prvky su: "; 
	
	for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                if (a[i] == b[j] && a[i] == c[k]){
                    cout << a[i] << " ";
                }

            }
        }
    }

	return 0;
}

