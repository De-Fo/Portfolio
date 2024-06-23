#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    int a, s, b, c;
    srand(time(NULL));
    for (int i = 1; i < 10; i++){
    a = rand();
    b = a % 10;
    cout << i << ". vygenerovane cislo " << b << endl;
    s += b;
	cout << i <<". medzisucet = " << s << endl;
	c = s / i;
	cout << i <<". priemer = " << c << endl;
}
    return 0;
}
