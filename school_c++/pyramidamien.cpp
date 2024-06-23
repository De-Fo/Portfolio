#include<bits/stdc++.h>

using namespace std;

void pyramida(const string name){

    int len = name.length();
    for (int i = 0; i < len; i++){
        for (int j = 0; j <= i; j++){
            cout << name[j];
        }
        cout << endl;
    }
}

void reversedpyramida(const string name){

    int len = name.length();
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - i - 1; j++){
            cout << " ";
        }
        for (int j = len - i - 1; j < len; j++){
            cout << name[j];
        }
        cout << endl;
    }
}

void pyramidahoredole(const string name){

    int len = name.length();
    for (int i = 0; i < len-1; i++){
    for (int j = 0; j <= i; j++){
            cout << name[j];
    }
        cout << endl;
    }

    for (int i = len - 1; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            cout << name[j];
        }
        cout << endl;
    }
}

int main() {
    string name;
    cout << "Zadaj svoje meno (max 20 znakov): ";
    cin >> name;

    cout << endl;
    pyramida(name);

    cout << endl;
    reversedpyramida(name);

    cout << endl;
    pyramidahoredole(name);

    cout << endl;
    
    return 0;
}
