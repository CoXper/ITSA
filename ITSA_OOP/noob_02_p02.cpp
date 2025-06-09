#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    double t, b, h;
    cin >> t >> b >> h;

    double ans = (t + b) * h / 2;
    cout << "Trapezoid area:" << fixed << setprecision(1) << ans << "\n";
}