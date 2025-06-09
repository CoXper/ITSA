#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    if(n == 0)
        cout << "0" << endl;
    else if(n > 0)
        cout << "正數" << endl;
    else
        cout << "負數" << endl;
} 