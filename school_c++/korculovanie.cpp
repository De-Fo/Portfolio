#include <iostream>

using namespace std;

int main() {
    cout << endl << "Krasokorculovanie - Znamky:" << endl;
	int const ROZ = 6;
	float min_uloha_4 = 6.0;
	float max_uloha_4 = 1.0;
	float priemer_uloha_4 = 0;
	float znamky[ROZ];
	
	for (int i = 0; i < ROZ; i++){
		znamky[i] = float(rand() % 50 / 10.00 + 1.00);
		cout << i + 1 << ". znamka: " << znamky[i] << endl;
		max_uloha_4 = (znamky[i] > max_uloha_4) ? znamky[i] : max_uloha_4;
		min_uloha_4 = (znamky[i] < min_uloha_4) ? znamky[i] : min_uloha_4;
		priemer_uloha_4 += znamky[i];
	}
	
	cout << "Max: " << max_uloha_4 << endl;
	cout << "Min: " << min_uloha_4 << endl;
	cout << "Priemerna znamka: " << (priemer_uloha_4 - min_uloha_4 - max_uloha_4) / 4 << endl << endl;
    return 0;
}

