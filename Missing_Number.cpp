#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[]= {0,1,2,3,4,5,6,7,9};
    int n = 9;
    int m = arr[0];
    for (int i=0; i<n;i++) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    int as = 0;
    int ps = 0;
    for (int i=1; i<=m; i++) {
        ps += i;
    }
    for (int i=0; i<n; i++) {
        as += arr[i];
    }
    cout << ps - as << endl;
    return 0;

    
}