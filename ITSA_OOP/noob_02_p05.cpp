#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int x, y;
    cin >> x >> y;

    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    if(x >= 0)
        cout << x << "/" << y << "=" << x / y << "..." << x % y << endl;
    else
        cout << x << "/" << y << "=" << x / y - 1 << "..." << -x % y << endl;
}