#include <iostream>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int four_hours = 60 * 4;
    int problem_solving_time = 0;
    int ith_problem = 0;
    bool has_enough_time = true;

    while (ith_problem < n && has_enough_time) {
        problem_solving_time += (ith_problem+1) * 5;
        if (k + problem_solving_time > four_hours) {
            has_enough_time = false;
        } else {
            ith_problem++;
        }
    }

    cout << ith_problem << endl;

    return 0;
}
