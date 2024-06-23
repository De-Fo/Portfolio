#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Zadejte koeficienty v poradi (a, e sa nesmu rovnat nule) a, b, c, d, e, f: ";
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    if (a == 0.0 || e == 0.0) {
        cout << "Chyba: Koeficienty A a E nesmu byt nula." << endl;
        return 1;
    }

    float x = (e*c - b*f) / (a*e - b*d);
    float y = (a*f - d*c) / (a*e - b*d);

    cout << "Riesenie sustavy rovnic je usporiadana dvojica: [" << x << ";" << y << "]" << endl;

    return 0;
}
