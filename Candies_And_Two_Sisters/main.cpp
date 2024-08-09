#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long t, n;

    cin >> t;

    vector<long long> candies;
    vector<long long> ways_to_distribute_candies;

    for (long long i = 0; i < t; ++i) {
        cin >> n;
        candies.push_back(n);
    }

    long long divided;

    for (long long candy : candies) {
        divided = candy / 2;

        if (candy % 2 == 0) {
            divided--;
        }

        ways_to_distribute_candies.push_back(divided);
    }

    for (int i = 0; i < ways_to_distribute_candies.size(); ++i) {
        cout << ways_to_distribute_candies[i] << endl;
    }

    return 0;
}
