#include <iostream>

using namespace std;

int main() {
    int x;
    int steps = 0;

    cin >> x;

    if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5) {
        steps++;
    } else {
        steps = x / 5;
        int remainder = x % 5;

        if (remainder != 0) {
            steps++;
        }
    }

    cout << steps << endl;

    return 0;
}
