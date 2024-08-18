#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, a, b, moves;

    cin >> t;

    int absolute_value;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        absolute_value = abs(a - b);
        moves = absolute_value / 10;

        if (absolute_value % 10 != 0) {
            moves++;
        }

        cout << moves << endl;
    }

    return 0;
}
