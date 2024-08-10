#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long t, n;

    cin >> t;

    vector<long long> ways_to_distribute_candies;

    for (long long i = 0; i < t; ++i) {
        cin >> n;
        ways_to_distribute_candies.push_back((n-1) / 2);
    }

    for (long long distributed : ways_to_distribute_candies) {
        cout << distributed << endl;
    }

    return 0;
}
