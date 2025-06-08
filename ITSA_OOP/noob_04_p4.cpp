#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n] = {0}, prefix[n] = {0};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i == 0) prefix[i] = arr[i];
        else prefix[i] = prefix[i-1] + arr[i]; //前綴和
    }

    for(int i = 0; i < n-1; i++)
        cout << prefix[i] << " ";
    
    cout << prefix[n-1] << "\n";
}