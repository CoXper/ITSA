#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    cout << "NT10=" << n / 10 << endl;
    cout << "NT5=" << (n%10) / 5 << endl;
    cout << "NT1=" << (n%5) << endl;
}