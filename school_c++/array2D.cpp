#include <bits/stdc++.h>

using namespace std;

const int R = 10;
const int C = 10;

int OBVOD(){

    char array[R][C];

    for(int i = 0; i < R; i++){
        
        for(int j = 0; j < C; j++){
            
            if(i == 0 || i == R - 1 || j == 0 || j == C - 1){
                array[i][j] = 'x';
            } 
            else{
                array[i][j] = '0';
            }
        }
    }

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
}


int DIAGONALNY(){

    char array[R][C];

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            if (i == j || i == C - j - 1){
                array[i][j] = 'x';
            } 
            else{
                array[i][j] = '0';
            }
        }
    }

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


}


int NAD() {
    
    char array[R][C];

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            if (i + j < R - 1){
                array[i][j] = 'x';
            }
            else{
                array[i][j] = '0';
            }
        }
    }

    for (int i = 0; i < R; i++){
        
        for (int j = 0; j < C; j++){
            
            cout << array[i][j] << " ";
            
        }
        cout << endl;
    }
}



int POD(){
    
    char array[R][C];

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            if (i + j > R - 1){
                array[i][j] = 'x';
            } 
            else{
                array[i][j] = '0';
            }
        }
    }

    for (int i = 0; i < R; i++){
        
        for (int j = 0; j < C; j++){
            
            cout << array[i][j] << " ";
            
        }
        cout << endl;
    }
}




int main() {
	
	
	int a = 1;
	int volba;
	while (a == 1){
	cout << "Zadaj kam chces zapisat hvizdicky v 2D poli: ";
	cin >> volba;
	
	switch(volba){
		case 1: OBVOD();
			break;
			
		case 2: DIAGONALNY();
			break;
			
		case 3: NAD();
			break;
			
		case 4: POD();
			break;
			
		default: cout << "Zadal si zle cislo." << endl;
			
	}
	cout << endl;
	cout << "Pokracovat = 1; Ukoncit = 0;" << endl;
	cin >> a;
}
    return 0;
}

