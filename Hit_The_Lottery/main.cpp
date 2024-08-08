#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> money_denominations = {100, 20, 10, 5, 1};

    int minimum_bills = 0, index = 0;

    while (n > 0 && index < money_denominations.size()) {
        minimum_bills += (int) n / money_denominations[index];
        n = n % money_denominations[index];
        index++;
    }

    cout << minimum_bills << endl;

    return 0;
}
