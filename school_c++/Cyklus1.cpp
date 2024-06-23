#include <iostream>

using namespace std;

int main() {
	cout << "Toto je 1. cyklus" << endl;
	for (int i = 0; i < 10; i++){
	cout << "Janko Hrasko" << endl;
	}
		
	cout << "Toto je 2. cyklus" << endl;
	for (int i = 0; i < 5; i++){
	cout << "Jul" << endl;
	}	
	
	cout << "Toto je 3. cyklus" << endl;
	for (int i = 0; i < 3; i++){
	cout << "September" << endl;
	}
	
	cout << "Toto je 4. cyklus" << endl;
	for (int i = 1; i < 6; i++){
	cout << i << endl;
	}
	
	cout << "Toto je 5. cyklus" << endl;
	for (int i = -5; i < 4; i++){
	cout << i << endl;
	}
	
	cout << "Toto je 6. cyklus" << endl;
	for (int i = 0; i < 20; i += 3){
	cout << i << endl;
	}
	
	cout << "Toto je 7. cyklus" << endl;
	for (int i = 10; i > 0; i--){
	cout << i << endl;
	}
	
	cout << "Toto je 8. cyklus" << endl;
	for (int i = 0; i < 11; i++){
	cout << i * i << endl;
	}
	
	cout << "Toto je 9. cyklus" << endl;
	for (int i = 0; i < 50; i += 2){
	cout << i << endl;
	}
	
	cout << "Toto je 10. cyklus" << endl;
	for (int i = 0; i < 40; i++){
	if (i % 2 == 1){
		cout << i << endl;
	}
	}
	
	cout << "Toto je 11. cyklus" << endl;
	for (int i = -100; i < 100; i++){
	if (i % 13 == 0){
		cout << i << endl;
	}
	}
	
	cout << "Toto je 12. cyklus" << endl;
	for (int i = -1000; i < 1000; i++){
	if (i % 62 == 0){
		cout << i << endl;
	}
	}
	
	cout << "Toto je 13. cyklus" << endl;
	for (int i = -10; i < 10; i++){
	cout << i << " ";
	}
	
	return 0;
}

