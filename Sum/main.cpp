#include <iostream>

bool any_value_is_sum_of_the_others_two(int a, int b, int c);

using namespace std;

int main() {
    int t, a, b, c;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;
        if (any_value_is_sum_of_the_others_two(a, b, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

bool any_value_is_sum_of_the_others_two(int a, int b, int c) {
    bool found = false;

    if (a == b + c || b == a + c || c == a + b) {
        found = true;
    }

    return found;
}
