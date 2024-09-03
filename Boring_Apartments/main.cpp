#include <iostream>

using namespace std;

int main() {
    int t, x, total_number_of_keypresses;
    bool found;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> x;

        int start_digit;
        total_number_of_keypresses = 0;
        found = false;

        for (int j = 1; j <= 9 ; ++j) {
            start_digit = j;

            for (int k = j; k < j + 4; ++k) {
                total_number_of_keypresses += to_string(start_digit).length();

                if (start_digit == x) {
                    found = true;
                    break;
                }

                start_digit = start_digit * 10 + j;
            }

            if (found) {
                break;
            }
        }
        
        cout << total_number_of_keypresses << endl;
    }

    return 0;
}
