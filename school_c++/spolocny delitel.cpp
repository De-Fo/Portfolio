#include <iostream>
using namespace std;
int main() {
	
   int n1, n2, i, c;
   cout << "Zadaj prve cislo" << endl;
   cin >> n1;  
   cout << "Zadaj druhe cislo" << endl;
   cin >> n2;
   
   while (true){
   for(i=1; i <= n1 && i <= n2; i++) {
      if(n1%i==0 && n2%i==0) {
         c = i;
      }
   }
   cout << "Najvacsi spolocny delitel: " << c << endl;
   break;
}
}
