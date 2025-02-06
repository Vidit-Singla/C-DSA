#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8};
    int mid;
    int target = 7;
    int size = 10;
    int s = 0;
    int e = size-1;
    while (s<=e) {
        mid = s + (e-s)/2;
        if (arr[mid] == target) {
            cout << mid;
            return 0;
        }
        else if (arr[mid] < target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
}