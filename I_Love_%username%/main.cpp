#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> contest_performances;

    int points;

    for (int i = 0; i < n; ++i) {
        cin >> points;
        contest_performances.push_back(points);
    }

    int maximum_points = contest_performances[0], minimum_points = contest_performances[0];
    int amazing_performances = 0;

    for (int i = 1; i < contest_performances.size(); ++i) {
        if (contest_performances[i] > maximum_points) {
            maximum_points = contest_performances[i];
            amazing_performances++;
        }

        if (contest_performances[i] < minimum_points) {
            minimum_points = contest_performances[i];
            amazing_performances++;
        }
    }

    cout << amazing_performances << endl;

    return 0;
}
