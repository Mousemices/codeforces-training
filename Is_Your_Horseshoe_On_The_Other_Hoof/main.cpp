#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> horseshoe_colors(4);

    for (int & horseshoe_color : horseshoe_colors) {
        cin >> horseshoe_color;
    }

    set<int> horseshoe_unique_colors(horseshoe_colors.begin(), horseshoe_colors.end());

    int horseshoes_to_buy = 4 - horseshoe_unique_colors.size();

    cout << horseshoes_to_buy << endl;

    return 0;
}
