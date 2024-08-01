#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    bool isHard = false;
    int index = 0;

    while (!isHard && index < n) {
        cin >> isHard;
        index++;
    }

    if (isHard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}
