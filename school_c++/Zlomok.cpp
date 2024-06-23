#include<bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, d, e;
	
	cout << "Zadaj citatela zlomku: ";
	cin >> a;
	cout << "Zadaj menovatela zlomku: ";
	cin >> b;
	
	if (a % b != 0){
		
		d = a;
		e = b;
		
		while (d != e){
			
				if (d > e){
				d -= e;
			}
				else{
				e -= d;
		}	
		
		
	}

		cout << a << "     " << a/d << endl;
		cout << "---" << " = " << "---" << endl;
		cout << b << "     " << b/e << endl;
	}
	else if (a == b){
		cout << "Podiel cisel sa rovna 1" << endl;
	}
	
	else if (a % b == 0){
		cout << " " << a << "    " << endl;
		cout << "---" << "  =  " << a/b << endl;
		cout << " " << b << "    " << endl;
	}
	
	return 0;
}

