#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long t, n, c1, c2;

    cin >> t;

    for (long long i = 0; i < t; ++i) {
        cin >> n;

        c2 = n / 3;
        c1 = n - 2 * c2;

        if (n % 3 == 1) {
            c1 = c2 + 1;
        } else if (n % 3 == 2) {
            c1 = c2;
            c2 = c2 + 1;
        }

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}
