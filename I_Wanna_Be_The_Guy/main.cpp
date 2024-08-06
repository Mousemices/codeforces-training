#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, p, q;

    cin >> n;
    cin >> p;

    vector<int> a(p);
    vector<int> unique_levels;

    for (int i = 0; i < a.size(); ++i) {
        cin >> a[i];

        bool is_unique = true;

        for (int j = 0; j < unique_levels.size(); ++j) {
            if (unique_levels[j] == a[i]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            unique_levels.push_back(a[i]);
        }
    }

    cin >> q;
    vector<int> b(q);

    for (int i = 0; i < b.size(); ++i) {
        cin >> b[i];

        bool is_unique = true;

        for (int j = 0; j < unique_levels.size(); ++j) {
            if (unique_levels[j] == b[i]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            unique_levels.push_back(b[i]);
        }
    }

    // Selection sort
    for (int i = 0; i < unique_levels.size(); ++i) {
        for (int j = i + 1; j < unique_levels.size(); ++j) {
            if (unique_levels[j] < unique_levels[i]) {
                int auxiliary = unique_levels[i];
                unique_levels[i] = unique_levels[j];
                unique_levels[j] = auxiliary;
            }
        }
    }

    bool ascending_by_1 = true;
    int total_level_passed = 0;

    for (int i = 1; i <= unique_levels.size(); ++i) {
        if (unique_levels[i-1] == total_level_passed + 1) {
            total_level_passed++;
        } else {
            ascending_by_1 = false;
            break;
        }
    }

    if (ascending_by_1 && total_level_passed == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
