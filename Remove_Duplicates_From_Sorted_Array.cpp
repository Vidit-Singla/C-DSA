#include <iostream>
using namespace std;

int main() {
    int a[] = {0,0,1,1,1,2,2,3,3,4};
    int n = 10;
    int j=0, i=1;
    while (i<n) {
        if (a[j] == a[i]) {
            i++;
        }
        else {
            a[++j] = a[i++];
        }
        
    }
    cout << j+1;
    
    return 0;

    
}