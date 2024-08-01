#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> givers; // p_i
    vector<int> receivers; // i
    int receiver;

    givers.reserve(n);
    receivers.reserve(n);

    for (int j = 0; j < n; ++j) {
        cin >> receiver;
        givers.push_back(receiver);
        receivers[receiver-1] = j+1;
    }

    for (int j = 0; j < n; ++j) {
        cout << receivers[j] << " ";
    }

    return 0;
}