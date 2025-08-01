#include <iostream>
using namespace std;

int binrec(int arr[], int size, int s, int e, int target){
    if (s > e) {
        return -1;
    }
    int mid = (s + e) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] < target) {
        return binrec(arr, size, mid + 1, e, target);
    }
    else {
        return binrec(arr, size, s, mid - 1, target);
    }
}

int main() {
    int arr[] = {10, 30, 50, 70, 90};
    int size = 5;
    int target = 90;
    int s = 0;
    int e = size - 1;

    int ans = binrec(arr, size, s, e, target);
    cout << ans;

    return 0;
}
