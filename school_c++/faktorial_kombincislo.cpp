#include <bits/stdc++.h>

using namespace std;

int faktorial(int x){
    long b = 1.0;
        for(int i = x; i > 0; i--){
            b *= i;
        }
}


int faktorialvypis(){
    int a;
    long b;
    cout << "Zadaj cislo: ";
    cin >> a;
    
    if (a>0){
        
        b = faktorial(a);
    }    
    else{
        
        cout << "Zly vstup, cislo musi byt vacsie ako 0" << endl;
   
    }
        string fakt = "Faktorial cisla ";
        fakt += to_string(a);
        fakt += " je: ";
        fakt += to_string(b);
        
        cout << fakt << endl;
        cout << string(fakt.length(), '_') << endl;
        cout << endl;
}

int kcislo(){
    int a, b, x;
    long c, d, e;
    cout << "Zadaj kombinacne cislo n nad k: ";
    cin >> a >> b;
    cout << endl;
    x = a - b;
    
    c = faktorial(a);
    d = faktorial(b);
    e = faktorial(x);
    
    cout << a << " nad " << b << " je: " << c/(d*e) << endl;
}

int main() {
 

    faktorialvypis();
    kcislo();
    
    return 0;
}
