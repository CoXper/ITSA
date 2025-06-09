#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n, max = -101;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x >= max)
            max = x;
    }
    cout << max << endl;
}