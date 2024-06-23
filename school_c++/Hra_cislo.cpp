#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int a;
	cout << "Zadaj cislo od 2 po 9: ";
	cin >> a;
	if (a >=2 && a <= 9){
		for (int b = 1; b <= 100; b++){
			if (b == a || b % a == 0 || b % 10 == a || b / 10 == a || (b % 10 + b / 10) == a){
				cout << setw(5) << "*";
			}
			else {
				cout << setw(5) << b;
			}
			if (b % 10 == 0)
            {
                cout << endl;
            }
		}
		
		
	}
	
	if (a < 2 || a > 9){
		cout << "Chyba, zadane cislo je moc velke alebo male." << endl;
		cout << "Zapni program odznova" << endl;
	}
	return 0;
}

