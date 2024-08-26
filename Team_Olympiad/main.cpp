#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t, w = 0;

    cin >> n;

    vector<int> students(n);
    vector<int> students_indexes(n);
    vector<int> olympic_teams;

    for (int i = 0; i < n; ++i) {
        cin >> t;
        students[i] = t;
    }

    int auxiliary, backup;

    for (int i = 0; i < students_indexes.size(); ++i) {
        students_indexes[i] = i;
    }

    for (int i = 0; i < students.size(); ++i) {
        for (int j = i + 1; j < students.size(); ++j) {
            if (students[j] < students[i]) {
                auxiliary = students[j];
                students[j] = students[i];
                students[i] = auxiliary;
                backup = students_indexes[j];
                students_indexes[j] = students_indexes[i];
                students_indexes[i] = backup;
            }
        }
    }

    int pointer_to_one = 0, pointer_to_two = -1, pointer_to_three = -1;

    for (int i = 0; i < students.size(); ++i) {
        if (pointer_to_two == -1 && students[i] == 2) {
            pointer_to_two = i;
        }

        if (pointer_to_three == -1 && students[i] == 3) {
            pointer_to_three = i;
        }
    }

    if (pointer_to_two != -1 && pointer_to_three != -1) {

        bool has_reached_max = false;

        while (!has_reached_max) {
            if (pointer_to_three < students_indexes.size()) {
                if (students[pointer_to_one] == 1 && students[pointer_to_two] == 2 && students[pointer_to_three] == 3) {
                    olympic_teams.push_back(students_indexes[pointer_to_one] + 1);
                    olympic_teams.push_back(students_indexes[pointer_to_two] + 1);
                    olympic_teams.push_back(students_indexes[pointer_to_three] + 1);
                    w++;
                }
            } else {
                has_reached_max = true;
            }

            pointer_to_one++;
            pointer_to_two++;
            pointer_to_three++;
        }
    }

    cout << w << endl;

    for (int i = 0; i < olympic_teams.size(); i+=3) {
        cout << olympic_teams[i] << " " << olympic_teams[i+1] << " " << olympic_teams[i+2] << endl;
    }

    return 0;
}
