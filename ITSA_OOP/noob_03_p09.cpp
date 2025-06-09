#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int m;
    cin >> m;

    if(m >= 3 && m <= 5)
        cout << "Spring" << endl;
    else if(m >= 6 && m <= 8)
        cout << "Summer" << endl;
    else if(m >= 9 && m <= 11)
        cout << "Autumn" << endl;
    else
        cout << "Winter" << endl;
}