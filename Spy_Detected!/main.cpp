#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;
    vector<int> a;

    cin >> t;

    int number;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> number;
            a.push_back(number);
        }

        bool spy_detected = false;
        int one_number, other_number, one_number_index = 1, other_number_index = -1, one_number_count = 0, other_number_count = 0;
        int index_of_different_number, index = 1;

        one_number = a[index - 1];
        one_number_count++;
        index_of_different_number = index - 1;

        while (!spy_detected && index < a.size()) {
            if (a[index] == one_number) {
                one_number_index = index + 1;
                one_number_count++;
            } else {
                other_number = a[index];
                other_number_index = index + 1;
                other_number_count++;
            }

            if (one_number_count > 1 && other_number_count == 1) {
                index_of_different_number = other_number_index;
                spy_detected = true;
            } else if (other_number_count >= 2 && one_number_count == 1) {
                index_of_different_number = one_number_index;
                spy_detected = true;
            } else {
                index++;
            }
        }

        cout << index_of_different_number << endl;

        a.clear();
    }

    return 0;
}
