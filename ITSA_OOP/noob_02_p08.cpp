#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << x << " " << x*x << " " << x*x*x << endl;
    }
}