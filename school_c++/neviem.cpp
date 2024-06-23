#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	bool SPOLU = false;
	
	cout << "Zadaj pocet  prvkov jednotlivych poli: ";
	cin >> a >> b >> c;
	
	int A[a], B[b], C[c];
		
	srand(time(NULL));
	for (int i = 0; i < a; i++)
	{
		A[i] = rand() % 5 + 1;
	}
	sort( A, A + a);
	
	for (int i = 0; i < b; i++)
	{
		B[i] = rand() % 5 + 1;
	}
	sort( B, B + b);	
	
	for (int i = 0; i < c; i++)
	{
		C[i] = rand() % 5 + 1;
	}
	sort( C, C + c);
	
	cout << "\nPolia \n\t a[" << a << "]:";
	for (int i = 0; i < a; i++)
	{
		cout << setw(3) << A[i];
	}
	cout << "\n\t b[" << b << "]:";
	for (int i = 0; i < b; i++)
	{
		cout << setw(3) << B[i];
	}
	cout << "\n\t c[" << c << "]:";
	for (int i = 0; i < c; i++)
	{
		cout << setw(3) << C[i];
	}

	cout << "\n\nSpolocne prvky su: ";
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < c; k++)
			{
				if ( A[i] == B[j] && A[i] == C[k] )	
				{
					cout << setw(2) << A[i];
					B[j] = 0;
					C[k] = 0; 
					i++;
					SPOLU = true;
				}
			}
		}
	}
	
	if (SPOLU == 0) cout << "ziadne";
	


	

	return 0;
}

