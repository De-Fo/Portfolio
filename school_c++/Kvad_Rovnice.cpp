#include <bits/stdc++.h>

using namespace std;

int linearna(float a, float b) {
    cout << "Toto nie je kvadraticka rovnica" << endl;
    if (a == 0) {
        
        if (b == 0) {
            cout << "Rovnica ma nekonecno rieseni" << endl;
        } 
        
        else {
            cout << "Rovnica nema riesenie" << endl;
        }
    } 
    
    else {
        float x = -b / a;
        cout << "LR ma jedno riesenie: x = " << x << endl;
    }
}

int kvadraticka(float a, float b, float c) {
    float d = b * b - 4 * a * c;

    if (d > 0) {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);

        cout << "Riesenim KR su: x1 = " << x1 << ", x2 = " << x2 << endl;
    } 
    
    else if (d == 0) {
        float x12 = -b / (2 * a);
        cout << "KR ma jedno riesenie: x12 = " << x12 << endl;
    } 
    
    else {
        cout << "KR nema riesenie v obore realnych cisel" << endl;
    }
}

int main() {
    cout << "Riesenie kvadratickej rovnice" << endl;

    float a, b, c;

    cout << "Zadaj koeficienty KR: ";
    cin >> a >> b >> c;

    if (a == 0) {
        linearna(b, c);
    } 
    
    else {
        kvadraticka(a, b, c);
    }

    return 0;
}
