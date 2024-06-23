#include<bits/stdc++.h>

using namespace std;

void pocetpismen(const string text) {
    int male[26] = {0};
    int velke[26] = {0};

    for (int i = 0; i < text.length(); i++){
    char c = text[i];
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        if (c >= 'a' && c <= 'z'){
            male[c - 'a']++;
        } 
        else {
            velke[c - 'A']++;
        }
    }
}

    cout << "Pocetnost jednotlivych znakov abecedy je:" << endl << endl;
    cout << "a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    for (int i = 0; i < 26; i++){
        cout << male[i] << "  ";
    }
    
    cout << endl << endl;

    cout << "A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    for (int i = 0; i < 26; i++){
        cout << velke[i] << "  ";
    }
    cout << endl;
}

int main() {
    string text;
    cout << "Zadaj vetu: ";
    getline(cin, text);
    pocetpismen(text);

    return 0;
}
