#include<bits/stdc++.h>

using namespace std;

int binarne_cislo(int dec){
	
    int bin[32];
    int i = 0;
	int b = dec;
	
    while (dec > 0){
    	
        bin[i++] = dec % 2;
        dec /= 2;
        
    }

    cout << "Cislo " << b << " v dvojkovej sustave: ";
    
    for (int j = i - 1; j >= 0; j--){
    	
        cout << bin[j];
        
    }

    cout << endl;
}



int desiatkove_cislo(int bin){

    int dec = 0;
	int a = 1;
	int b = bin;

    while (bin > 0){
    int l = bin % 10;
    bin /= 10;
    dec += l * a;
    a *= 2;
    }

    cout << "Cislo " << b << " je v desiatkovej sustave: " << dec << endl;
}

	

int main() {
	
    int dec;
    
    cout << "Zadaj cislo v desiatkovej sustave: ";
    cin >> dec;
    cout << endl;
    binarne_cislo(dec);
    
	cout << "-----------------------------------" << endl;
	
    double bin; 

    cout << "Zadaj binarne cislo: ";
    cin >> bin;
    cout << endl;
    desiatkove_cislo(bin);

    return 0;
    
}
