#include <iostream>

using namespace std;

int main() {
    int n, m, c, mishka_win_count = 0, chris_win_count = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> m >> c;

        if (m > c) {
            mishka_win_count++;
        } else if (c > m) {
            chris_win_count++;
        }
    }

    if (mishka_win_count > chris_win_count) {
        cout << "Mishka" << endl;
    } else if (chris_win_count > mishka_win_count) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
