#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    float h, w;
    cin >> w >> h;
    float h_m = h / 100;

    cout << fixed << setprecision(2) << w / h_m / h_m << endl;
}