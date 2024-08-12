#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> events;
    int police_recruits_hired = 0;
    int crime_untreated = 0;
    int incident;

    for (int i = 0; i < n; ++i) {
        cin >> incident;
        events.push_back(incident);
    }

    for (int event : events) {
        if (event == -1) {
            if (police_recruits_hired > 0) {
                police_recruits_hired--;
            } else {
                crime_untreated++;
            }
        }
        if (event > 0) {
            police_recruits_hired += event;
        }
    }

    cout << crime_untreated << endl;

    return 0;
}
