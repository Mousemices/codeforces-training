#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    string words[n], abbreivations[n];

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    int size_minus_first_and_last_character;
    string first, last, number;

    for (int i = 0; i < n; ++i) {
        if (words[i].length() > 10) {
            size_minus_first_and_last_character = words[i].length() - 2;
            first = words[i][0];
            last = words[i][words[i].length() - 1];
            number = to_string(size_minus_first_and_last_character);
            words[i] = first.append(number).append(last);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << words[i] << endl;
    }

    return 0;
}
