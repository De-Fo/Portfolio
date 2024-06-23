#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
const int NUM_DAYS = 7;
const int NUM_TIMES = 3;
 
double generateRandomTemp(double minTemp, double maxTemp) {
    return (double)rand() / RAND_MAX * (maxTemp - minTemp) + minTemp;
}
 
int main() {
    srand(time(nullptr));
 
    double temps[NUM_DAYS][NUM_TIMES];

    for (int i = 0; i < NUM_DAYS; i++) {
        for (int j = 0; j < NUM_TIMES; j++) {
            temps[i][j] = generateRandomTemp(15.0, 30.0);
        }
    }
 
    for (int i = 0; i < NUM_DAYS; i++) {
        double maxTemp = temps[i][0];
        double minTemp = temps[i][0];
        double sumTemp = 0.0;
 
        cout << "Den " << i + 1 << ": " << endl;
 
        for (int j = 0; j < NUM_TIMES; j++) {
            cout << " Teplota ";
            if (j == 0) {
                cout << "rano: ";
            } else if (j == 1) {
                cout << "na obed: ";
            } else {
                cout << "vecer: ";
            }
            cout << temps[i][j] << "°C" << endl;
 
            if (temps[i][j] > maxTemp) {
                maxTemp = temps[i][j];
            }
            if (temps[i][j] < minTemp) {
                minTemp = temps[i][j];
            }
            sumTemp += temps[i][j];
        }
 
        double avgTemp = sumTemp / NUM_TIMES;
 
        cout << "  Max temp: " << maxTemp << "°C" << endl;
        cout << "  Min temp: " << minTemp << "°C" << endl;
        cout << "  Priemerna teplota: " << avgTemp << "°C" << endl << endl;
    }
 

    double totalTemp = 0.0;
 
    for (int i = 0; i < NUM_DAYS; i++) {
        for (int j = 0; j < NUM_TIMES; j++) {
            totalTemp += temps[i][j];
        }
    }
 
    double avgTemp = totalTemp / (NUM_DAYS * NUM_TIMES);
 
    cout << "Priemorna teplota cez tyzden: " << avgTemp << "°C" << endl;
 
    return 0;
}
 
