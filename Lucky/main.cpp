#include <iostream>

using namespace std;

int main() {
    int t, first_part, second_part;
    string ticket;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> ticket;

        first_part = (int) ticket.at(0) + ticket.at(1) + ticket.at(2);
        second_part = (int) ticket.at(3) + ticket.at(4) + ticket.at(5);

        if (first_part == second_part) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
