#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c, d, t;

    vector<int> distances(3);

    cin >> t;

    int participants_in_front_of_a;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c >> d;

        participants_in_front_of_a = 0;
        distances[0] = b;
        distances[1] = c;
        distances[2] = d;

        for (int distance : distances) {
            if (distance > a) {
                participants_in_front_of_a++;
            }
        }

        cout << participants_in_front_of_a << endl;
    }

    return 0;
}
