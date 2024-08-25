#include <iostream>
#include <vector>

int find_ith_liked_element_by_Polycarp(int position);

using namespace std;

int main() {
    int t, k, x;

    cin >> t;

    vector<int> integers(t);

    for (int i = 0; i < integers.size(); ++i) {
        cin >> k;
        integers[i] = k;
    }

    for (int i = 0; i < integers.size(); ++i) {
        x = find_ith_liked_element_by_Polycarp(integers[i]);
        cout << x << endl;
    }

    return 0;
}

int find_ith_liked_element_by_Polycarp(int position) {
    int index = 1, counter = 0, element;
    bool ends_with_three, divisible_by_three, reached = false;

    while (!reached) {
        ends_with_three = index % 10 == 3;
        divisible_by_three = index % 3 == 0;

        if (!ends_with_three && !divisible_by_three) {
            element = index;
            counter++;

            if (counter == position) {
                reached = true;
            }
        }

        index++;
    }

    return element;
}
