#include<bits/stdc++.h>

using namespace std;

int main()
{

	string RC;
	cout << "Zadaj rodne cislo: ";
	getline(cin, RC);
	cout << endl;
	
	if(RC < '50000' or RC > '')
	
	cout << RC[4] << RC[5] << ".";
	
	if(RC[2] == '5' or RC[2] == '6'){		
		cout << "1" << RC[3] << ".";		
	}
	
	else{
		cout << RC[2] << RC[3] << ".";
	}

	cout << "19" << RC[0] << RC[1];
	
	cout << endl;
	
	if(RC[2] == '5' or RC[2] == '6'){
		cout << "Zena" << endl;
	}
	
	else{
		cout << "Muz" << endl;
	}
	


	return 0;
}

