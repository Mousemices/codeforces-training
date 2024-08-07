#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> soldiers_height(n);
    int swap_movements = 0; // second
    int max_height = 0, min_height = 101;
    int max_height_index, min_height_index;

    for (int i = 0; i < n; ++i) {
        cin >> soldiers_height[i];
        if (soldiers_height[i] > max_height) {
            max_height = soldiers_height[i];
            max_height_index = i;
        }

        if (soldiers_height[i] < min_height) {
            min_height = soldiers_height[i];
            min_height_index = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (soldiers_height[i] == soldiers_height[max_height_index]) {
            max_height_index = i;
            break;
        }
    }

    for (int i = n - 1; n >= 0; --i) {
        if (soldiers_height[i] == soldiers_height[min_height_index]) {
            min_height_index = i;
            break;
        }
    }

    for (int i = max_height_index; i > 0; --i) {
        int current = soldiers_height[i];
        int previous = soldiers_height[i-1];

        if (i-1 == min_height_index) {
            min_height_index++;
        }
        
        soldiers_height[i-1] = current;
        soldiers_height[i] = previous;
        swap_movements++;
    }

    for (int i = min_height_index; i < n-1; ++i) {
        int current = soldiers_height[i];
        int next = soldiers_height[i+1];

        soldiers_height[i+1] = current;
        soldiers_height[i] = next;
        swap_movements++;
    }

    cout << swap_movements << endl;

    return 0;
}
