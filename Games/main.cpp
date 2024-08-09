#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    int h, a;

    vector<int> home_uniform_colors;
    vector<int> guest_uniform_colors;
    int uniform_swap_count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> h >> a;
        home_uniform_colors.push_back(h);
        guest_uniform_colors.push_back(a);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && home_uniform_colors[i] == guest_uniform_colors[j]) {
                uniform_swap_count++;
            }
        }
    }

    cout << uniform_swap_count << endl;

    return 0;
}
