#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    float c;
    cin >> c;

    cout << fixed << setprecision(1) << c*9/5 + 32 << endl;
}