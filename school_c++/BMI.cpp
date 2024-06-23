#include <iostream>
#include <string>

using namespace std;

int main(){
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
		
	return 0;
}
