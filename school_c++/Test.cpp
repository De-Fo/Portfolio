#include<bits/stdc++.h>

using namespace std;

int minSSD(const vector<int>& n1, const vector<int>& n2) {
    vector<int> s1 = n1;
    vector<int> s2 = n2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int x = 0;

    for (int i = 0; i < s1.size(); ++i) {
        x += s1[i] * s2[s2.size() - 1 - i];
    }
    cout << endl << endl;
    cout << "Minimalny sucet: " << x << endl;
}

int main() {
    srand(time(NULL));

    int a, n;
    
    cout << "Zadaj pocet prvkov pola (oba polia maju rovnaky pocet prvkov): ";
    cin >> a;
    
    n = a;
    int b[n];
    int c[n];

    for(int i = 0; i < a; i++){
        b[i] = rand() % 5 + 1;
        cout << b[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < a; i++){
        c[i] = rand() % 5 + 1;
        cout << c[i] << " ";
    }   

    minSSD(vector<int>(b, b + n), vector<int>(c, c + n));
        
    return 0;
}

