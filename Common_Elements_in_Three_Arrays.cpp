#include <iostream>
#include <unordered_map>
#include<limits.h>
using namespace std;

int main() {
    int a[] = {1,5,10,20,40,80};
    int b[] = {6,7,20,80,100};
    int c[] = {3,4,15,20,30,70,80,120};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;
    int i,j,k;
    i = j= k = 0;
    while (i<n1 && j<n2 && k<n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        else if(a[i] < b[j]) {
            i++;
        }
        else if(b[j] < c[k]) {
            j++;
        }
        else {
            k++;
        }
    }
    return 0;

    
    
    
    
}