#include <iostream>

using namespace std;

int main() {
    int t, x, y, n, k;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> x >> y >> n;

        k = n - (n - y) % x;

        cout << k << endl;
    }

    return 0;
}