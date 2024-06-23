#include <bits/stdc++.h>

#define F(x) (x)*(x) - 3*(x) + 2

using namespace std;

int main() {
    string status = "a";
    int a, b, c, d;
    string korene;

    while (status == "a") {
        cout << "Predpis KF: y = x^2 - 3x + 2" << endl;
        cout << "------------------------------" << endl;
        cout << endl;
        cout << "Zadaj hranice intervalu: ";
        cin >> a >> b;
        cout << endl;

        
        if (a > b) {
            cout << "Zadal si zle hranice intervalu." << endl;
            cout << "Ak chces zadat znova hranice intervalu, stlac 1: ";
            cin >> d;
            if (d == 0) {
                status = "b";
            } else {
                status = "a";
            }
        } else {
            cout << setw(3) << "Hodnota x " << setw(10) << " Hodnota funkcie v bode X" << endl;
            cout << "_____________________________________"<< endl;
            for (int i = a; i <= b; i++) {
                cout << setw(6) << i << setw(18) << F(i) << endl;
                
                 if (i > 0) {
                    korene += to_string(F(i));
                }
            }
            
            cout << "_____________________________________"<< endl;
            c = korene.length();
            cout << endl;
            cout << "RIESENIE ROVNICE: "<< endl;
            cout << "Pocet korenov: " << c << endl;
            cout << "__________________" << endl;
            cout << endl;
            for (int j = 0; j < c; j++){
                cout << setw(6) << j+1 << setw(6) << korene[j] << endl;
            }
            cout << "__________________" << endl;
            korene.clear();
            cout << endl;
            cout << endl;
            cout << "Ak chces pokracovat, stlac (a): ";
            cin >> status;
        }
    }

    return 0;
}
