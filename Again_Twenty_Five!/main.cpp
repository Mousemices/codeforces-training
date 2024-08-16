#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    // Based on number theory, we can know 5 ^ n, when n >= 2, last two digits are 25

    // Unnecessary condition, because problem input n is always greater and equals than 2
    if (n >= 2) {
        cout << 25;
    }

    return 0;
}