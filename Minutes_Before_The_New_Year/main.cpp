#include <iostream>

using namespace std;

int main() {
    int t, h, m, number_of_minutes_before_new_year = 0;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> h >> m;

        number_of_minutes_before_new_year = 60 - m;
        h++;

        while (h < 24) {
            number_of_minutes_before_new_year += 60;
            h++;
        }

        cout << number_of_minutes_before_new_year << endl;
    }
    return 0;
}
