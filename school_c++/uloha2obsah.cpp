#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "vloz dlzku, sirku pozemku a velkost strany domu, (oddel medzerami)" << endl;
    cin >> a >> b >> c;
    cout << "plocha pozemku" << endl;
    cout << a * b << endl;
    cout << "plocha domu" << endl;
    cout << c * c << endl;
    cout << "plocha zahrady" << endl;
    cout << (a * b) - (c*c) << endl;
	return 0;
}
