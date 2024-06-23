#include<bits/stdc++.h>

using namespace std;

int main() {
    srand(time(NULL));

    int a, c;
    
    cout << "Zadaj prvok, ktory chces hladat v poli: ";
    cin >> a;
    
    int x[20];
    int b[20];
    
    c = 0;

    for(int i = 0; i < 20; i++){
    	
        b[i] = rand() % 10;
        
        cout << b[i] << ", ";

        if(b[i] == a){
        	
            x[c] = i;
            c += 1;
        }
    }

    cout << endl;

    if(c == 0){
    	
        cout << "Cislo " << a << " sa nevyskytuje v danom poli cisel." << endl;
    } 
	
	else{
		
        cout << "Vyskyt cisla " << a << ": " << c << " krat" << endl;

        cout << "Pozicie: ";

        for(int i = 0; i < c; i++){
        	
            cout << x[i]+1 << ". ";
            
        }
    }

    return 0;
}

