#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}