#include <iostream>

using namespace std;

int main() {
    int a, b, c, t;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;

        if (a + b == c) {
            cout << '+' << endl;
        } else {
            cout << '-' << endl;
        }
    }

    return 0;
}
