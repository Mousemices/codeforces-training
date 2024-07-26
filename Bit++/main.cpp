#include <iostream>

using namespace std;
int main() {
    int n, x = 0;
    string operation;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> operation;
        if (operation.at(0) == 'X' || operation.at(operation.length() - 1) == 'X') {
            if (operation.at(1) == '+') {
                x++;
            }

            if (operation.at(1) == '-') {
                x--;
            }
        }
    }

    cout << x << endl;

    return 0;
}
