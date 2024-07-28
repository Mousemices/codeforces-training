#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    int one = 1, two = 2, three = 3;
    string addition = "+";
    vector<int> numbers;

    cin >> s;

    for (int i = 0; i < s.length(); i += 2) {
        numbers.push_back((int) s.at(i) - '0'); // or s.at(i) - 48, both can typecast the numeric character into int accurately
    }

    int temporary_number, temporary_index;

    // Brute-force sorting: Selection Sort with time complexity O(n^2)
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (numbers[j] < numbers[i]) {
                temporary_number = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temporary_number;
            }
        }
    }

    string ordered_s;
    string temporary_s;
    string number;

    for (int i = 0; i < numbers.size(); ++i) {
        number = to_string(numbers[i]);
        ordered_s = temporary_s.append(number).append(addition);
    }

    ordered_s.pop_back();

    cout << ordered_s << endl;

    return 0;
}
