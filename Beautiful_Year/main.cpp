#include <iostream>
#include <string>

using namespace std;

int main() {
    int y;

    cin >> y;

    bool is_found = false;
    string temporary_y;
    int distinct_number_counter = 0;
    int has_distinct_number;
    // 1988
    // 1 != 9 != 8 !=8  +1
    // 9 !=8 !=8 +2
    // 8 != 8 +3
    // 8 No +4
    while (!is_found) {
        y += 1;
        temporary_y = to_string(y);
        distinct_number_counter = 0;

        for (int i = 0; i < temporary_y.length(); ++i) {
            has_distinct_number = true;
            for (int j = i + 1; j < temporary_y.length(); ++j) {
                if (temporary_y[i] == temporary_y[j]) {
                    has_distinct_number = false;
                }
            }

            if (has_distinct_number) {
                distinct_number_counter++;
            } else {
                break;
            }
        }

        if (has_distinct_number && distinct_number_counter == temporary_y.length()) {
            is_found = true;
        }
    }

    cout << y << endl;

    return 0;
}
