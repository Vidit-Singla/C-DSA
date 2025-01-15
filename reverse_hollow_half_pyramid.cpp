#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int row=0; row<n; row++) {
        for (int col=0; col<n-row; col++) {
            if (row == 0 || row == n-1 || col == 0 || row + col == n-1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }






    return 0;
}