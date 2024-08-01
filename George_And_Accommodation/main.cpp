#include <iostream>

using namespace std;

int main() {
    int n, p, q;

    cin >> n;

    int free_place_to_accommodate = 0;

    for (int i = 0; i < n; ++i) {
        cin >> p >> q;
        if (q-p >= 2) {
            free_place_to_accommodate++;
        }
    }

    cout << free_place_to_accommodate << endl;

    return 0;
}
