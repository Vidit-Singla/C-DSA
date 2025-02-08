#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;



int main() {
    int arr[7] = {1,2,3,4,6,7,8};
    int s = 0;
    int e = 7;
    while (s <= e) {
        int mid = s+ (e-s)/2;
        if (arr[mid+1] - arr[mid] != 1) {
            cout << arr[mid] +1;
            return 0;
        }
        else if (arr[mid]-arr[mid-1] != 1) {
            cout << arr[mid] -1;
            return 0;
        }
        else if (arr[mid] - mid == 0) {
            s = mid +1;
        }
        else {
            e = mid -1;
        }
    }



    
    return 0;
}