#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    double d, h;
    cin >> d >> h;

    double ans = d * h / 2;
    cout << "Triangle area:" << fixed << setprecision(1) << ans << "\n";
}