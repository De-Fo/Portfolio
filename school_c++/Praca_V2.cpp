#include <bits/stdc++.h>

using namespace std;

int main() {
    int arabska;
    string rimska;

        cout << "Zadaj arabske cislo (mensie ako 4000): ";
        cin >> arabska;


    if (arabska < 1 || arabska > 3999) {
            cout << "Cislo musi byt vacsie alebo rovne 1 a mensie ako 4000" << endl;
    }

    else{

    vector<pair<int, string>> prevod = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    for (const auto& rule : prevod) {
        while (arabska >= rule.first) {
            rimska += rule.second;
            arabska -= rule.first;
        }
    }

    cout << "Rimske cislo: " << rimska << endl;

    }
    
    return 0;
}