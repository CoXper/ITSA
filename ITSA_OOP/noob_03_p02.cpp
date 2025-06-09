#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    char n;
    cin >> n;

    if(n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U' || n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
        cout << "母音" << endl;
    else
        cout << "子音" << endl;
}