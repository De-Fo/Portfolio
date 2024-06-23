#include <iostream>
using namespace std;
int main() {
	
   int n1, n2, i, c, m;
   m = 1;
   cout << "Zadaj prve cislo" << endl; cin >> n1;
   cout <<"Spolocne delitele: " << endl;
   
   for(i=1; i <= n1; i++) {
      if(n1%i==0) {
        cout << i << endl;
      }
   }
   
   cout << endl;
   cout << "Zadaj druhe cislo" << endl; cin >> n2;
   cout << "Spolocne delitele: " << endl;
      
    for(i=n2; i > 0; i--) {
      if(n2%i==0) {
        cout << i << endl;
      }
   }
}
