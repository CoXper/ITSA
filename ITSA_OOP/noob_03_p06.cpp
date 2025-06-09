#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x >= 50 && x <= 70)
            cout << x << endl;
        else 
            cout << "100" << endl;
    }
}