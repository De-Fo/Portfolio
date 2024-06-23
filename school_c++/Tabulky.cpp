#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

double pi = 3.14159265359;


int obsah(){
	
    int a, b, s;
    cout << "Obsah obdlznikov [S = a * b]" << endl;
    cout << "Zadaj rozmer tabulky: ";
    cin >> a >> b;

    s = a * b;

    for (int i = 1; i <= b; i++)
    {
        cout << "\t" << i;
    }
    cout << endl << endl;
	cout << endl;

    int c = 1;
    for (int j = 1; j <= a; j++){
    	
        cout << j << "\t"; 

        for (int k = 1; k <= b; k++){
        	
            cout << k * j << "\t";

            if (c % b == 0){
            	
                cout << endl;
            }
            
            c++;
            
        }
        cout << endl;
    }
}

char pokracuj() {
    cout << "Ak chces pokracovat stlac lubovolnu klavesu:" << endl;
    int l;
    l = getch();
    cout << "--------------------------------------------" << endl;
  }


int obvod(){
	
	int a, b, s;
	cout << "Obvod obdlznikov [S = 2*(a+b)]" << endl;
	cout << "Zadaj rozmer tabulky: ";
	
    cin >> a >> b;

    s = 2 * (a + b);

    for (int i = 1; i <= b; i++){
        
        cout << "\t" << i;
        
    }
    
    cout << endl << endl;
    cout << endl;

    int c = 1;
    
    for (int j = 1; j <= a; j++) {
        
        cout << j << "\t";

        for (int k = 1; k <= b; k++) {
            
            cout << 2 * (j + k) << "\t";
            
            if (c % b == 0) {
                
                cout << endl;
                
            }
            c++;
        }
        cout << endl;
    }
}

int uhlopriecky(){
    
    int a, b, s;
    cout << "Dlzky uhlopriecky obdlznikov." << endl;
    cout << "Zadaj rozmer tabulky: ";
    
    cin >> a >> b;
    
    s = sqrt(pow(a, 2)+pow(b, 2));

    for (int i = 1; i <= b; i++)
    {
        cout << "\t" << i;
    }
    cout << endl << endl;
	cout << endl;

    int c = 1;
    for (int j = 1.00; j <= a; j++){
    	
        cout << j << "\t"; 

        for (int k = 1.00; k <= b; k++){
        	
            cout << setprecision(2) << fixed << sqrt(pow(j, 2)+pow(k, 2)) << "\t";

            if (c % b == 0){
            	
                cout << endl;
            }
            
            c++;
            
        }
        cout << endl;
    }
}


int sinus() {
    int a, b;

    cout << "Zadaj rozmer tabulky: ";
    cin >> a >> b;
    cout << "Sinus uhla v stupnoch." << endl;

    for (int i = 0; i <= b; i+=5){
        for (int j = i; j < i + 5 && j <= b; j++){
        
        if (j <= 9){
		
            cout << "sin(0" << j << ") " << setw(2) << setprecision(3) << fixed << sin(j * pi / 180) << "   ";
}

		else{
			cout << "sin(" << j << ") " << setw(2) << setprecision(3) << fixed << sin(j * pi / 180) << "   ";
		}

	}

    cout << endl;

}
}



int main()
{
	
	obsah();
    pokracuj();
    obvod();
    pokracuj();
    uhlopriecky();
    pokracuj();
    sinus();
    
    return 0;
}
	
