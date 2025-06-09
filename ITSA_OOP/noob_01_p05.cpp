#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    char num[5];
    cin >> num;

    for(int i = 0; i < 5; i++) {
        int out = num[i] - '0';
        for(int j = 0; j < out; j++)
            cout << "*";
        cout << "\n";
    }
}