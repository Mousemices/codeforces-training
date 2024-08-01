#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    string magnet;
    char first_pole;
    int group_of_magnet = 0;

    for (int i = 0; i < n; ++i) {
        cin >> magnet;

        if (i > 0) {
            if (magnet[0] != first_pole) {
                group_of_magnet++;
            }
        } else {
            group_of_magnet++;
        }

        first_pole = magnet[0];
    }

    cout << group_of_magnet << endl;

    return 0;
}
