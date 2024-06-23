#include<bits/stdc++.h>

using namespace std;

int main(){
	
    vector<int> a, b;

    cout << "Zadaj suradnice vektora u: ";
    
    for(int i = 0; i < 3; ++i){
        int value;
        cin >> value;
        a.push_back(value);
    }

    cout << "Zadaj suradnice vektora v: ";
    
    for (int i = 0; i < 3; i++){
        int value;
        cin >> value;
        b.push_back(value);
    }

    int scalar = 0;
    for(size_t i = 0; i < a.size(); i++){
        scalar += a[i] * b[i];
    }

    cout << "Skalarny sucin vektorov u a v je: " << scalar << endl;

    vector<int> cross(3);
    
//    Jednoduchsi zapis  (for loop nizsie ho nahradzuje)
//    cross[0] = a[1] * b[2] - a[2] * b[1];
//    cross[1] = a[2] * b[0] - a[0] * b[2];
//    cross[2] = a[0] * b[1] - a[1] * b[0];

	for(size_t i = 0; i < cross.size(); i++){
		cross[i] = a[(i+1) % 3]* b[(i + 2) % 3] - a[(i + 2) % 3] * b[(i+1) % 3];
	}


	cout << endl;

 	cout << "Vektorovy sucin vektorov u a v je: ";
    for(size_t i = 0; i < cross.size(); i++){
    	
        cout << cross[i] << " ";
    
    }
    
    cout << endl;

    return 0;
}

