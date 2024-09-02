#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        // size: 1
        // 0
        // answer = 0, not -1

        // size: 1
        // -1
        // answer = -1

        // 3
        // 1 1 1
        // answer -1, not 1

        vector<int> elements(n);
        int wrong_position_count = 0, even_number_count = 0, odd_number_count = 0;

        for (int j = 0; j < n; ++j) {
            cin >> elements[j];

            if (j % 2 == 0) {
                if (elements[j] % 2 != 0) {
                    wrong_position_count++;
                    odd_number_count++;
                }
            } else {
                if (elements[j] % 2 == 0) {
                    wrong_position_count++;
                    even_number_count++;
                }
            }
        }

        if (wrong_position_count == 0) {
            cout << wrong_position_count << endl;
        } else {
            if (wrong_position_count > 0) {
                if (even_number_count == odd_number_count) {
                    cout << wrong_position_count / 2 << endl;
                } else {
                    cout << -1 << endl;
                }
            }
        }
    }

    return 0;
}
