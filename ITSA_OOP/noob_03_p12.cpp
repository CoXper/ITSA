#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int score;
        cin >> score;

        if(score <= 59)
            cout  << "不及格" << endl;
        else if(score <= 69)
            cout  << "丙等" << endl;
        else if(score <= 79)
            cout  << "乙等" << endl;
        else if(score <= 89)
            cout  << "甲等" << endl;
        else
            cout  << "優等" << endl;
    }
}