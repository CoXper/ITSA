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
        if(x > 31)
            cout << "Value of more than 31" << endl;
        else
            cout << (int)pow(2, x) << endl;
    }
}