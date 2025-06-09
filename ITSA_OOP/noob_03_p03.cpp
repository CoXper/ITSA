#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << "NO" << endl;
            break;
        }
        else if(i == n-1)
            cout << "YES" << endl;
    }
}