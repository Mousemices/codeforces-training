#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int r, c, body = m - 1;
    char dot_sign = '.', number_sign = '#';
    vector<vector<char>> snake(n, vector<char>(m, dot_sign));

    for (r = 0; r < n; ++r) {
        for (c = 0; c < m; ++c) {
            if (r % 2 == 0) {
                snake[r][c] = number_sign;
            }

            if (r % 2 != 0 && r != 0 && r != n - 1) {
                snake[r][body] = number_sign;

                if (body == m - 1) {
                    body = 0;
                } else {
                    body = m - 1;
                }

                break;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << snake[i][j];
        }
        cout << endl;
    }

    return 0;
}
