#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long t, n, c1, c2;

    cin >> t;

    for (long long i = 0; i < t; ++i) {
        cin >> n;

        c1 = (long long) ceil((double) n / 3);
        c2 = (long long) floor((double) n / 3);

        if (c1 + c2 * 2 == n) {
            cout << c1 << " " << c2 << endl;
        } else {
            cout << c2 << " " << c1 << endl;
        }
    }

    return 0;
}
