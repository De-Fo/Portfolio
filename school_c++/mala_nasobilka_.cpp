#include <iostream>
using namespace std;

int main() {
    
    int tabulka = 10;
    
    for (int i = 1; i <= tabulka; i++){
        
        for (int j = 1; j <= tabulka; j++) {
            cout << i * j << "\t";
        }
        
        cout << endl;
    }
    
    return 0;
}