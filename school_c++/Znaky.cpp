#include<bits/stdc++.h>

using namespace std;

void vypis(string text){
    int charCount[128] = {0};

    for (int i = 0; i < text.length(); i++){

        char znak = text[i];
        charCount[znak]++;
    }

    cout << "Pocetnost jednotlivych znakov:" << endl;
    for (int i = 0; i < 128; i++){
        if (charCount[i] > 0){
            cout << "'" << char(i) << "' - " << charCount[i] << "x" << endl;
        }
    }
}


int main() {
	
	
    
    cout << "VYPIS ZNAKOV" << endl;
    cout << "------------" << endl;
    cout << "Zadaj text: ";
	string text;
	getline(cin, text);
	vypis(text);


    return 0;
}