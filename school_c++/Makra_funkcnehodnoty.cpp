#include <bits/stdc++.h>

#define F(x) (x)*(x) - 2*(x) + 4

using namespace std;

int main() {
    string status = "a";
    int a, b, d;

    while (status == "a") {
        cout << "Predpis funkcie je f: x^2 - 2x + 4" << endl;
        cout << "Zadaj hranice intervalu: ";
        cin >> a >> b;

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
            cout << setw(3) << "x" << setw(8) << "F(x)" << endl;
            cout << "___________" << endl;
            cout << endl;
            for (int i = a; i <= b; i++) {
                cout << setw(3) << i << setw(8) << F(i) << endl;
            }

            cout << endl;
            cout << "Ak chces pokracovat, stlac (a): ";
            cin >> status;
        }
    }

    return 0;
}