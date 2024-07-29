#include <iostream>

using namespace std;

int main() {
    int k; // First banana's price
    int n; // Soldier's initial dollars
    int w; // Total bananas to buy

    cin >> k >> n >> w;

    int borrowed_money_from_friend = 0;

    for (int i = 0; i < w; ++i) {
        n = n - (i + 1) * k;
    }

    if (n < 0) {
        borrowed_money_from_friend = -n;
    }

    cout << borrowed_money_from_friend << endl;

    return 0;
}
