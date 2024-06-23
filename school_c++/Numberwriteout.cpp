#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Vpis cislo do 0 do 5\n";
	cin >> number;
	
	if (number == 0){
		cout << "nula\n";
	}
	
	else if (number == 1){
		cout << "jeden\n";
	}
	
	else if (number == 2){
		cout << "dva\n";
	}
	
	else if (number == 3){
		cout << "tri\n";
	}
	
	else if (number == 4){
		cout << "styri\n";
	}
	
	else if (number == 5){
		cout << "pat\n";
	}
	
	else {
		"Toto cislo nepoznam.\n";
	}
}

