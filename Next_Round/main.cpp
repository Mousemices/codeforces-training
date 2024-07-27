#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    vector<int> scores(n);
    int participants_to_the_next_round = 0;

    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int k_th_score = scores[k - 1];

    if (k_th_score == 0) {
        k_th_score = 1;
    }

    int i = 0;
    bool stopCondition = false;

    if (k_th_score > 0) {
        while (i < n && !stopCondition) {
            if (scores[i] >= k_th_score) {
                participants_to_the_next_round++;
                i++;
            } else {
                stopCondition = true;
            }
        }
    }

    cout << participants_to_the_next_round << endl;

    return 0;
}
