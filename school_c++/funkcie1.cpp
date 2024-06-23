#include <iostream>
#include <iomanip>
using namespace std;

float x, y;

float sucet(){
	return x + y;
}


float rozdiel(){
	return x - y;
}


float podiel() {
	return x / y;
}


float sucin() {
	return x * y;
}

int main()
{
	cout << "zadaj prve cislo: ";
	cin >> x;
	cout << "zadaj druhe cislo: ";
	cin >> y;
	
	cout << "sucet: " << sucet() << endl;
	cout << "rozdiel: " << rozdiel() << endl;
	cout << "sucin: " << sucin() << endl;
	cout << "podiel: " << podiel() << endl;
	return 0;
}

