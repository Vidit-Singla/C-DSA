#include<iostream>
#include<assert.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    int c = 1;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row+1; col++) {
            cout << c++;
        }
        cout << endl;
    }
    int start = c-n;

    for (int row = 0; row <n; row++) {
        int k = start;
        for (int col=0; col < n-row; col++) {
            cout << k++;
        }
        start -= n-row-1;
        cout << endl;
    }

    return 0;
    
}