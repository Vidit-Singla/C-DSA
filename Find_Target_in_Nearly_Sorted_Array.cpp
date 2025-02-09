#include <iostream>
using namespace std;
#include<vector>

int nbs(int arr[], int size, int target) {
    int s = 0;
    int e = size-1;
    while (s <= e) {
        int mid = s+ (e-s)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid-1] == target){
            return mid-1;
        }
        else if (arr[mid+1] == target){
            return mid=1;
        }
        else if (arr[mid] < target) {
            s = mid + 2;
            
        }
        else {
            e = mid-2;
            
        }
        
    }
    return -1;
}

int main() {
    int arr[] = {10,3,40,20,50,80,70};
    int size = 7;
    int target = 80;
    int ans = nbs(arr,size,target);
    cout << ans;
}
