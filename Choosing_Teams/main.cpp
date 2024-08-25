#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, y;

    cin >> n >> k;

    vector<int> students_championship_participation_times(n);

    for (int i = 0; i < n; ++i) {
        cin >> y;

        students_championship_participation_times[i] = y;
    }

    int auxiliary;

    for (int i = 0; i < students_championship_participation_times.size(); ++i) {
        for (int j = i + 1; j < students_championship_participation_times.size(); ++j) {
            if (students_championship_participation_times[j] < students_championship_participation_times[i]) {
                auxiliary = students_championship_participation_times[j];
                students_championship_participation_times[j] = students_championship_participation_times[i];
                students_championship_participation_times[i] = auxiliary;
            }
        }
    }

    int first, second, third, participation_teams_count = 0;

    for (int i = 0; i < students_championship_participation_times.size(); ++i) {
        if (i < students_championship_participation_times.size() &&
            i + 1 < students_championship_participation_times.size() &&
            i + 2 < students_championship_participation_times.size()) {

            first = students_championship_participation_times[i] + k;
            second = students_championship_participation_times[i + 1] + k;
            third = students_championship_participation_times[i + 2] + k;

            if (first <= 5 && second <= 5 && third <= 5) {
                participation_teams_count++;
            } else {
                break;
            }
            i += 2;
        }
    }

    cout << participation_teams_count << endl;

    return 0;
}
