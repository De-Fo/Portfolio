#include<bits/stdc++.h>

using namespace std;

int main() {

    int a;
    cout << "Zadaj cislo: ";
    cin >> a;

    bool prvocislo = true;

    if (a <= 1) {
        prvocislo = false;
    } 
    
    else {
        
        for (int i = 2; i <= a / 2; i++) {
            
            if (a % i == 0) {
                prvocislo = false;
                break;
            }
        }
    }

    if (prvocislo == true) {
        cout << "Zadane cislo je prvocislo" << endl;
    } 
    
    else {
        cout <<"Zadane cislo nie je prvocislo" << endl;
    }

    return 0;
}
