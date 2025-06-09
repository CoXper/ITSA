#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double s;
        cin >> s;

        double ans = (int)((s * s * 100 + 5) / 10) / 10.;
        cout << fixed << setprecision(1) << ans << "\n";
    }
}