#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    for(int i = 1; i < (n-1); i += 2)
        cout << i << " ";
        
    if(n % 2 == 0)
        cout << n - 1 << endl;
    else
        cout << n << endl;
}