#include <iostream>
using namespace std;

int main() {
    int numriShpenzimeve;
    double shpenzim, total = 0;
    double buxheti;

    cout << "Vendos buxhetin ditor: ";
    cin >> buxheti;

    cout << "Sa shpenzime do te regjistrosh? ";
    cin >> numriShpenzimeve;

    for (int i = 1; i <= numriShpenzimeve; i++) {
        cout << "Shpenzimi " << i << ": ";
        cin >> shpenzim;
        total += shpenzim;
    }

    cout << "\nTotali i shpenzimeve: " << total << " euro" << endl;

    if (total > buxheti) {
        cout << "Kujdes! Ke tejkaluar buxhetin me "
            << total - buxheti << " euro." << endl;
    }
    else {
        cout << "Bravo! Ke kursyer "
            << buxheti - total << " euro." << endl;
    }

    return 0;
}