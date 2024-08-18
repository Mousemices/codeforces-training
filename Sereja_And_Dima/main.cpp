#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, sereja_points = 0, dima_points = 0;
    unsigned long long left, right, last = 0;
    vector<int> card_numbers;

    cin >> n;

    int number;

    for (int i = 0; i < n; ++i) {
        cin >> number;
        card_numbers.push_back(number);
    }

    left = 0, right = card_numbers.size() - 1;

    bool game_finished = false;
    int turn = 0;
    unsigned long long size = card_numbers.size();

    while (!game_finished) {
        if (size != 0) {
            if (turn % 2 == 0) {
                // Sereja
                if (size == 1) {
                    sereja_points += card_numbers[last];
                } else {
                    if (card_numbers[left] > card_numbers[right]) {
                        sereja_points += card_numbers[left];
                        left++;
                        last = left;
                    } else if (card_numbers[right] > card_numbers[left]) {
                        sereja_points += card_numbers[right];
                        right--;
                        last = right;
                    }
                }

            }

            if (turn % 2 != 0) {
                // Dima
                if (size == 1) {
                    dima_points += card_numbers[last];
                } else {
                    if (card_numbers[left] > card_numbers[right]) {
                        dima_points += card_numbers[left];
                        left++;
                        last = left;
                    } else if (card_numbers[right] > card_numbers[left]) {
                        dima_points += card_numbers[right];
                        right--;
                        last = right;
                    }
                }

            }
        } else {
            game_finished = true;
        }

        turn++;
        size--;
    }

    cout << sereja_points << " " << dima_points << endl;

    return 0;
}
