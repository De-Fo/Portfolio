#include<bits/stdc++.h>

using namespace std;

void sifruj(string &text, int posun){
    for (int i = 0; i < text.length(); i++){
        char znak = text[i];
        
          if((znak >= 'A' && znak <= 'Z') || (znak >= 'a' && znak <= 'z')){
            
            if (znak >= 'A' && znak <= 'Z'){
                znak = 'A' + (znak - 'A' + posun) % 26;
            } 
            
            else if (znak >= 'a' && znak <= 'z'){
                znak = 'a' + (znak - 'a' + posun) % 26;
            }
        }
        text[i] = znak;
    }
}

void desifruj(string &text, int posun) {
    sifruj(text, 26 - posun);
}

int main() {
    
    cout << "CESAROVA SIFRA" << endl;
    cout << "--------------" << endl;

    char volba = 'y';

    while (volba == 'y' || volba == 'Y') {
        string text;
        int posun;

        cout << "Zadaj text, ktory chces (za/de)sifrovat: ";
        getline(cin, text);

        cout << "Zadaj posun n: ";
        if (!(cin >> posun)) {
            cout << "Zly vstup prosim zadaj cislo ";
        }

        cin.ignore();

        cout << "Vyber si moznost: " << endl;
        cout << "  s - sifrovat text" << endl;
        cout << "  d - desifrovat text" << endl;
        cout << "Vyberte: ";

        cin >> volba;

        if (volba == 's'){
            sifruj(text, posun);
            cout << "Sifrovany text: " << text << endl;
        } 
        
        else if (volba == 'd'){
            desifruj(text, posun);
            cout << "Desifrovany text: " << text << endl;
        } 
        
        else{
            cout << "Neplatna volba." << endl;
        }

        cout << "Chces pokracovat? (y/n): ";
        cin >> volba;
        cin.ignore();
    }

    cout << endl;
    cout << "Dovidenia..." << endl;

    return 0;
}