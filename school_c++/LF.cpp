#include<bits/stdc++.h>

using namespace std;

float a, b;

int predpis(){

	
	
	if (a > 0 && b > 0){

	cout << "f: y = " << a << "x + " << b << endl;
		
	}
	
	else if(a > 0 && b < 0){
	
	b = b * (-1);	
	cout << "f: y = " << a << "x - " << b << endl;
	b = b * (-1);
			
	}

	else if(b == 0){
		
		cout << "f: y = " << a << "x" << endl;
		
	}

	else if (a == 0){
		
		cout << endl;
		
	}
	cout << endl;
}


int monotonnost(){
	
	if()
	
}



// priesecniky

double px(){
	
}

double py(){
	
}

int priesecniky(){
	
}

int inverzna(){
	
	b = -b/a;
	a = 1/a;
	
	cout << "Predpis inverznej funkcie k danej LF je: ";

	predpis();
	
}


int main()
{

	cout << "Zadaj koeficienty LF: ";
	cin >> a >> b;
	cout << "--------------------" << endl;

	predpis();
	inverzna();

	return 0;
}

