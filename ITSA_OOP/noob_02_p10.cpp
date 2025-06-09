#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int mi;
    cin >> mi;

    double km = 1.6 * (double)mi;
    cout << "km=" << fixed << setprecision(1) << km << endl;
}