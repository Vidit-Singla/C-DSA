#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

int bs(int arr[], int s, int e, int target) {
    while (s<=e) {
        int mid = s + (e-s)/2;
        if (arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
}

int exp(int arr[], int n, int x) {
    if (arr[0] == x) {
        return 0;
    }
    int i=1;
    while (i < n && arr[i] <= x) {
        i *= 2;
    }
    return bs(arr,i/2,min(i,n-1),x);
}

int main() {
    int arr[]= {3,4,5,6,11,13,14,15,56,70};
    int n =10;
    int x = 13;
    int ans = exp(arr,n,x);
    cout << ans;
    
}


