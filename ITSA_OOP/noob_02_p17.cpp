#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    double t, s;
    cin >> t >> s;

    if(t <= 60) {
        cout << fixed << setprecision(1) << t * s << endl;
        
    }
    else if(t <= 120) {
        cout << fixed << setprecision(1) << s * 60 + s * (t-60) * 1.33 << endl;
    }
    else   
        cout << fixed << setprecision(1) << s * 60 + s * 60 * 1.33 + s * (t-120) * 1.66 << endl;

}