#include <iostream>

using namespace std;

int main() {
    int t;

    string a, b;

    cin >> t;

    string x, y;

    for (int i = 0; i < t; ++i) {
        cin >> b;

        a.clear();

        if (b.length() == 2) {
            a = b;
        } else {
            for (int j = 0; j < b.length(); j += 2) {
                if (j+3 >= b.length()) {
                    x = b[j];
                    y = b[j+1];
                    a.append(x).append(y);
                } else {
                    x = b[j];
                    a.append(x);
                }
            }
        }

        cout << a << endl;
    }

    return 0;
}
