#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    double min;
    cin >> min;

    if(min <= 800) {
        cout << fixed << setprecision(1) << min * 0.9 << endl;
    }
    else if(min < 1500) {
        cout << fixed << setprecision(1) << min * 0.9 * 0.9 << endl;
    }
    else   
        cout << fixed << setprecision(1) << min * 0.9 * 0.79 << endl;
}