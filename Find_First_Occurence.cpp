#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

void findfirstoccur(int arr[], int target,int &firstIndex) {
    int s = 0;
    int e = 8;
    while (s<=e) {
        int mid = (e+s)/2;
        if (arr[mid] == target) {
            firstIndex = mid;
            e = mid-1;
        }
        else if (arr[mid] < target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }


}

int main() {
    int arr[8] = {1,2,2,2,2,3,4,5};
    int target = 2;
    int firstIndex = -1;
    findfirstoccur(arr,target,firstIndex);
    cout << firstIndex;
    return 0;
}