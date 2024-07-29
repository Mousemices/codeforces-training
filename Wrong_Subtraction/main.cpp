#include <iostream>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    while (k > 0) {
        int last_digit = n % 10;

        if (last_digit != 0) {
            n--;
        }

        if (last_digit == 0) {
            n /= 10;
        }

        k--;
    }

    cout << n << endl;

    return 0;
}
