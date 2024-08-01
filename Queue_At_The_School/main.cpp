#include <iostream>

using namespace std;

int main() {
    int n, t;
    string s;

    cin >> n >> t;
    cin >> s;

    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j + 1 < n && s.at(j) == 'B' && s.at(j+1) == 'G') {
                s.at(j) = 'G';
                s.at(j+1) = 'B';
                j += 1;
            }
        }
    }

    cout << s << endl;

    return 0;
}
