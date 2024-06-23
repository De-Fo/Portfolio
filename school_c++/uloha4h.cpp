#include <iostream>

using namespace std;

int main() {
	int a, b, c, max;
	cout << "Vloz 3 cisla (Oddelene medzerami)." << endl;
	cin >>a>>b>>c;

	cout << "Maximum: ";
	
	if(a>b && a>c){
    	cout<<a<< endl;
    }
    
    else if(b>c){
    	cout<<b<< endl;
    }
    
    else{
    	cout<<c<< endl;
    }
    
    if (a==b && a==c && b==c){
    	cout<<a<< endl;
    	cout<<"vsetky cisla sa rovnaju: ";
	}
	
	else if(a==b){
		cout<< "Prve a druhe cislo sa rovna " << endl;
	}
	
	else if(a==c){
		cout<< "Prve a posledne cislo sa rovna" << endl;
	}	
	
	else if(b==c){
		cout<< "Druhe a posledne cislo sa rovna" << endl;
	}
	
	else{
		cout << "Ziadne cisla sa nerovnaju" << endl;
	}
	
}
