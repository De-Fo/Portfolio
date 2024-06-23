#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b, c, d;
    string operation;
    d = 0;
    string ano = "a";
    cout << "Kalkulacka" << endl;
    while (ano == "a"){
    cout << "Zadaj cislo a, b: ";
    cin >> a >> b;
    cout << "Zadaj operaciu ktoru chces vykonat +, -, *, / |: ";
    cin >> operation;
    if (operation == "+"){
        cout << "Sucet: " <<  setprecision(2) << a + b << endl;
        d += 1;
    }
    else if (operation == "-" ){
        cout << "Rozdiel: " <<  setprecision(2)  << a - b << endl;
        d += 1;
    }
    
    else if (operation == "*"){
        cout << "Sucin: " <<  setprecision(2)  << a * b << endl;
        d += 1;
    }
    
    else if (operation == "/" && b == 0){
        cout << "Nulou sa delit neda" << endl;
    }    
        
    else if (operation == "/" && b != 0){
        cout << "Podiel: " <<  setprecision(2)  << a / b << endl;
        d += 1;
    }
    
    cout << "chces pokracovat? a/n" << endl;
    cin >> ano;
       
}

    cout << "Pocet uspesnych operacii: " << d << endl;
    return 0;
}