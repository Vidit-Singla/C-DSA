#include <iostream>
#include<limits.h>
using namespace std;

void findmissing(int *a, int n) {
    for (int i=0; i<n; i++) {
        int index = abs(a[i]);
        if (a[index-1] > 0) {
            a[index-1] *= -1;
        }
    }
    for (int i=0; i<n;i++) {
        if(a[i] > 0) {
            cout << i+1 << " ";
        }
    }

}

int main() {
    int n = 5;
    int a[]= {1,3,3,3,4};
    findmissing(a,n);
    return 0;  
}