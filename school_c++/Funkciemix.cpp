#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int pole[10];
int maxc = 0;
int minc = 10;

int nacitaj(){
	srand(time(0));
	for (int i=0; i < 10; i++)
		pole[i] = rand() % 10 + 1;
}

int vypis(){
	for (auto x : pole)
		cout << x << "\t";
	cout << endl;
}

int ciara(){
	cout << "--------------------------------------------------------------------------" << endl;
}

int otoc(){
    int size = sizeof(pole)/sizeof(pole[0]);
    
    int k=0, reverse[size];
    
    for(int i=size-1; i>=0; ){
        reverse[k++] = pole[i--];
    }
    
    for(int i=0; i<size; i++){
        cout << reverse[i] <<"\t";
    }
 cout << endl;
}

int bmi(){
	string status;
	float vaha;
	float vyska;
	float bmi;
	
		
	cout << "Vaha = ";
	cin >> vaha;
	cout << "Vyska (v cm) = ";
	cin >> vyska;
		
	bmi = (vaha/(vyska*vyska))*10000;

	cout << "Bmi = " << bmi;
	cout << endl;

	if(bmi<17.5){
		status ="Podvyziva";
	}
	else if(bmi>25.99 && bmi<30.01){
		status ="Nadvaha";
	}
	else if(bmi>30.99){
		status ="Obezita";
	}
	else{
		status ="Normalna vaha";
	}  	
	
	cout << status;
	cout << endl;
}

int faktorial(){

    int n;
    long factorial = 1.0;

    cout << "Zadaj kladne cislo: ";
    cin >> n;

    if (n < 0)
        cout << "Chyba! Zadaj kladne cislo.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Faktorial " << n << " = " << factorial;    
    }

}

int main()
{
	nacitaj();
	vypis();
	ciara();
	otoc();
	bmi();
	faktorial();
	return 0;
}

