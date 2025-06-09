#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    float d, diff = 0.238; // meter
    cin >> d;

    cout << (int)(d / diff) + 1 << endl;
}