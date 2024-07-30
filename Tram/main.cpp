#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int a, b;
    int passengers = 0;
    int minimum_capacity = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> a >> b;

        if (i == 1 || i == n) {
            if (i == 1) {
                passengers += b;
                minimum_capacity += b;
            } else {
                passengers -= passengers;
            }
        } else {
            passengers -= a;
            passengers += b;
            if (passengers > minimum_capacity) {
                minimum_capacity = passengers;
            }
        }
    }

    cout << minimum_capacity << endl;

    return 0;
}
