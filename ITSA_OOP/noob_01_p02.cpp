#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num = 0, arr[4] = {0};
    cin >> num;
    for(int i = 0; i < 4; i++) {
        arr[i] = num % 10;
        num /= 10;
    }
    for(int i = 3; i >= 0; i--)
        cout << arr[i] << endl;
}