#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int sum = 0;
    
    for(int i = 0; i < 6; i++) {
        int num = 0;
        cin >> num;
        sum += (num * num);
    }
    cout << sum << endl;
}