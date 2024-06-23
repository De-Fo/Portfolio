#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    int a, s, b, c;
    srand(time(NULL));
    for (int i = 1; i < 32; i++){
    a = rand();
    b = a % 21 - 10;
    cout << i << ". Januar: " << b << " stupnov celsia" << endl;
}
    return 0;
}
