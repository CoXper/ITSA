#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    cout << "百元 " << n / 100 << endl;
    cout << "十元 " << (n%100) / 10 << endl;
    cout << "壹元 " << n % 10 << endl;
}