#include <iostream>

using namespace std;

int main() {
    int n;
    int petya, vasya, tonya;
    int problem_implementation_counter = 0;
    int sum_sure = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> petya >> vasya >> tonya;
        sum_sure += petya + vasya + tonya;

        if (sum_sure >= 2) {
            problem_implementation_counter++;
        }

        sum_sure = 0;
    }

    cout << problem_implementation_counter << endl;

    return 0;
}
