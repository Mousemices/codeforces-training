#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x1, x2, x3;

    cin >> x1 >> x2 >> x3;

    vector<int> coordinates = {x1, x2, x3};
    int minimum_total_distance_to_travel = 0;

    for (int i = 0; i < coordinates.size(); ++i) {
        for (int j = i+1; j < coordinates.size(); ++j) {
            if (coordinates[j] > coordinates[i]) {
                int auxiliary = coordinates[j];
                coordinates[j] = coordinates[i];
                coordinates[i] = auxiliary;
            }
        }
    }

    minimum_total_distance_to_travel += coordinates[0] - coordinates[1];
    minimum_total_distance_to_travel += coordinates[1] - coordinates[2];

    cout << minimum_total_distance_to_travel << endl;

    return 0;
}
