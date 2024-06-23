#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout << "ERATOSTENOVO SITO" << endl;
	
    int n = 20;
    bool ciselko[n + 1];
    memset(ciselko, true, sizeof(ciselko));

    for (int p = 2; p * p <= n; p++) {
        if (ciselko[p] == true) {
            for (int i = p * p; i <= n; i += p)
                ciselko[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (ciselko[p])
            cout << p << " ";

    return 0;
}

