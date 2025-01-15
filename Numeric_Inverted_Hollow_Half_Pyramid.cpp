#include<iostream>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    int i = 0;
    for (int row = i; row<n; row++){
        for (int col=row ; col<n; col++){
            if (row==0 || row == n-1 || col == row || col == n-1) {
                cout << col+1;
            }
            else {
                cout << " ";
            }
        }
        i++;
    cout << endl;
    }
    
}