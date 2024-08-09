#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    map<string, int> polyhedrons;
    map<string, int>::iterator iterator;

    polyhedrons["Tetrahedron"] = 4;
    polyhedrons["Cube"] = 6;
    polyhedrons["Octahedron"] = 8;
    polyhedrons["Dodecahedron"] = 12;
    polyhedrons["Icosahedron"] = 20;

    cin >> n;

    string polyhedron_name;
    int total_number_of_faces = 0;

    for (int i = 0; i < n; ++i) {
        cin >> polyhedron_name;

        iterator = polyhedrons.find(polyhedron_name);

        if (iterator != polyhedrons.end()) {
            total_number_of_faces += polyhedrons.find(polyhedron_name)->second;
        }
    }

    cout << total_number_of_faces << endl;

    return 0;
}
