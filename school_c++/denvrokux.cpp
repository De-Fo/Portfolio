#include <iostream>

using namespace std;

int main() {
    int a, bload;
    cout << "Vpis den v roku\n";
    cin >> a;
    
	if(a % 7 == 1){
		bload = 1;
	}
    else if(a % 7 == 2){
		bload = 2;
	}
	else if(a % 7 == 3){
		bload = 3;
	}
	else if(a % 7 == 4){
		bload = 4;
	}
	else if(a % 7 == 5){
		bload = 5;
	}
	else if(a % 7 == 6){
		bload = 6;
	}
	else if(a % 7 == 0){
		bload = 7;
	}
    
    switch (bload){
	case 3: cout << "Monday\n"; break;
	case 4: cout << "Tuesday\n"; break;
	case 5: cout << "Wednesday\n"; break;
	case 6: cout << "Thursday\n"; break;
	case 7: cout << "Friday\n"; break;
	case 1: cout << "Saturday\n"; break;
	case 2: cout << "Sunday\n"; break;
	
	}
	return 0;
}

