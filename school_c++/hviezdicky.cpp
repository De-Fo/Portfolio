#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    cout << "Zadaj retazec: ";
    getline(cin, input);

    string output = "";
    char prevChar = '\0';
    for (int i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (c == prevChar) {
            output += '*';
        }
        output += c;
        prevChar = c;
    }

    cout << output << endl;

    return 0;
}