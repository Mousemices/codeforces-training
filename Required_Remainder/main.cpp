#include <iostream>

using namespace std;

int main() {
    int t, x, y, n, k;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        k = 0;

        cin >> x >> y >> n;

        for (int j = 0; j < n; ++j) {
            if (j % x == y) {
                k = j;
            }
        }

        cout << k << endl;
    }

    return 0;
}