#include <iostream>

using namespace std;

int main() {
    int n, h;

    cin >> n >> h;

    int minimum_width_for_the_road = 0;

    int ith_friend_height;
    for (int i = 0; i < n; ++i) {
        cin >> ith_friend_height;
        if (ith_friend_height > h) {
            minimum_width_for_the_road += 2;
        } else {
            minimum_width_for_the_road += 1;
        }
    }

    cout << minimum_width_for_the_road << endl;

    return 0;
}
