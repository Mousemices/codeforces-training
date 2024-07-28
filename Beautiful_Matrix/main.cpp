#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows = 5, columns = 5;
    vector<vector<int>> matrix(rows, vector<int>(columns, 0));
    int target_row = 2, target_column = 2;
    int current_row, current_column;
    int movements = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                current_row = i;
                current_column = j;
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (current_row < target_row) {
            current_row++;
            movements++;
        }

        if (current_column < target_row) {
            current_column++;
            movements++;
        }

        if (current_row > target_row) {
            current_row--;
            movements++;
        }

        if (current_column > target_column) {
            current_column--;
            movements++;
        }

        if (current_row == target_row && current_column == target_row) {
            break;
        }
    }

    cout << movements << endl;

    return 0;
}
