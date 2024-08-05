#include <iostream>

using namespace std;

int main() {
    int t;
    long long a, b;

    cin >> t;

    long long result, remainder;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b;

        if (a % b == 0) {
            result = 0;
        } else {
            remainder = a % b;
            result = b - remainder;
        }

        cout << result << endl;
    }

    return 0;
}
