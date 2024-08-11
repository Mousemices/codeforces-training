#include <iostream>
#include <vector>
#include <cmath>

int calculate_first_digit(int n);

int calculate_number_length(int n);

using namespace std;

int main() {
    int t, n;

    cin >> t;

    vector<int> round_numbers;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        round_numbers.push_back(n);
    }

    vector<int> sum_round_numbers;

    for (int i = 0; i < round_numbers.size(); ++i) {
        int temporal_round_number = round_numbers[i];
        int total_count = 0, k = 0;
        double round_number;
        bool finished = false;

        while(!finished) {
            int first = calculate_first_digit(temporal_round_number);
            int length = calculate_number_length(temporal_round_number);

            round_number = first * pow(10, length - 1);
            total_count += (int) round_number;
            sum_round_numbers.push_back((int) round_number);
            temporal_round_number -= (int) round_number;
            k++;

            if (total_count == round_numbers[i]) {
                finished = true;
            }
        }

        cout << k << endl;

        for (int j = 0; j < sum_round_numbers.size(); ++j) {
            cout << sum_round_numbers[j] << " ";
        }

        sum_round_numbers.clear();

        cout << endl;
    }

    return 0;
}

// Calculate the length of number n
int calculate_number_length(int n) {
    int number_of_digits = 0;

    while (n > 0) {
        n /= 10;
        number_of_digits++;
    }

    return number_of_digits;
}

// Calculate the first digit of number n
int calculate_first_digit(int n) {
    while (n >= 10) {
        n /= 10;
    }

    return n;
}
