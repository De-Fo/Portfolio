#include <iostream>

using namespace std;

int main() {

    int a;
    cout << "Zadaj vysku: ";
    cin >> a;
    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a - i - 1; j++) {
            cout << " ";
        }

        for(int k = 0; k < 2 * i + 1; k++){
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}