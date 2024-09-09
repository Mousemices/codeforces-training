#include <iostream>

int gcd_maximum_single_value(int a, int b);

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        cout << n / 2 << endl;
    }

    return 0;
}

int gcd_maximum_single_value(int a, int b) {
    // Using the Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
