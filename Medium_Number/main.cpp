#include <iostream>
#include <vector>

using namespace std;

void sorting_integer_array(vector<int> &values);

int main() {
    int t, a, b, c;
    vector<int> numbers(3);

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;

        numbers[0] = a;
        numbers[1] = b;
        numbers[2] = c;

        sorting_integer_array(numbers);

        cout << numbers[1] << endl;
    }

    return 0;
}

void sorting_integer_array(vector<int> &values) {
    int auxiliary;

    for (int i = 0; i < values.size(); ++i) {
        for (int j = i + 1; j < values.size(); ++j) {
            if (values[j] < values[i]) {
                auxiliary = values[j];
                values[j] = values[i];
                values[i] = auxiliary;
            }
        }
    }
}
