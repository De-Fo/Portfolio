#include <bits/stdc++.h>

using namespace std;

int main() {

    int arabska;
    string rimska;

    cout << "Zadaj arabske cislo: ";
    cin >> arabska;
    if (arabska < 4000){

    while (arabska >= 1000) {
        rimska += "M";
        arabska -= 1000;
    }
    while (arabska >= 900) {
        rimska += "CM";
        arabska -= 900;
    }
    while (arabska >= 500) {
        rimska += "D";
        arabska -= 500;
    }
    while (arabska >= 400) {
        rimska += "CD";
        arabska -= 400;
    }
    while (arabska >= 100) {
        rimska += "C";
        arabska -= 100;
    }
    while (arabska >= 90) {
        rimska += "XC";
        arabska -= 90;
    }
    while (arabska >= 50) {
        rimska += "L";
        arabska -= 50;
    }
    while (arabska >= 40) {
        rimska += "XL";
        arabska -= 40;
    }
    while (arabska >= 10) {
        rimska += "X";
        arabska -= 10;
    }
    while (arabska >= 9) {
        rimska += "IX";
        arabska -= 9;
    }
    while (arabska >= 5) {
        rimska += "V";
        arabska -= 5;
    }
    while (arabska >= 4) {
        rimska += "IV";
        arabska -= 4;
    }
    while (arabska >= 1) {
        rimska += "I";
        arabska -= 1;
    }

    cout << "Rimska cislica: " << rimska << endl;
}

else{
        cout << "Cislo musi byt mensie ako 4000." << endl;
}

    return 0;
}
