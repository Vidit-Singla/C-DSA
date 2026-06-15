#include <iostream>
using namespace std;

int pivot(int arr[], int n) {
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (mid < e && arr[mid] > arr[mid + 1]) { 
            return mid;
        }
        if (mid > s && arr[mid] < arr[mid - 1]) {
            return mid - 1;
        }
        if (arr[mid] <= arr[s]) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}

int binarys(int arr[], int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2; 
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return -1;  
}

int main() {
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivotind = pivot(arr, n);
    int target = 5;

    int ans = -1;
    if (target >= arr[0] && target <= arr[pivotind]) {
        ans = binarys(arr, 0, pivotind, target);
    }
    else {
        ans = binarys(arr, pivotind + 1, n - 1, target);
    }

    cout <<  ans << endl;
    return 0;
}
