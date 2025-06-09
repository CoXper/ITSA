#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        float BMI;
        cin >> BMI;

        if(BMI < 18.5)
            cout << "體重過輕" << endl;
        else if(BMI < 24)
            cout << "正常" << endl;
        else if(BMI < 28)
            cout << "體重過重" << endl;
        else
            cout << "肥胖" << endl;
    }
}