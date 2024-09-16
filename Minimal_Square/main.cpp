#include <iostream>

using namespace std;

int main() {
    int t, a, b;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b;

        int side_1 = max(2 * a, b);
        int side_2 = max(2 * b, a);

        int side_3 = max(a, 2 * b);
        int side_4 = max(b, 2 * a);

        int result = min(min(side_1, side_2), min(side_3, side_4));

        cout << result * result << endl;
    }

    return 0;
}
