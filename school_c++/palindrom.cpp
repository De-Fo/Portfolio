#include<bits/stdc++.h>

using namespace std;

int main() {
    string slovo;
    cout << "Zadaj retazec: ";
    getline(cin, slovo);


    string slovos;
    
for (int i = 0; i < slovo.size(); i++) {
    char c = slovo[i];
    if (c != ' ') {
        slovos += c;
    }
}

    string rslovos = slovos;
    reverse(rslovos.begin(), rslovos.end());

    bool isPalindrome = (slovos == rslovos);

    cout << slovo << " - ";

    if (isPalindrome) {
        cout << "je palindrom." << endl;
    } 
    else {
        cout << "nie je palindrom." << endl;
    }

    return 0;
}