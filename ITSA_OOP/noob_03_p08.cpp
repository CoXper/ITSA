#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    switch (n) {
        case 1:
            cout << "Person" << endl;
            break;
        case 2:
            cout  << "Fairy" << endl;
            break;
        case 3:
            cout << "Dwarf" << endl;
            break;
    }
}