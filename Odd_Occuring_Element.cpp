// #include <iostream>
// using namespace std;
// #include<vector>

// int oddocc(int arr[], int size) {
//     int s = 0;
//     int e = size-1;
//     while (s <= e) {
//         int mid = s + (e-s)/2;
//         if (s == e) {
//             return s;
//         }
//         if (mid - 1 >= 0 && mid +1 <size && arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]) {
//             return mid;
//         }
//         if (mid -1 >= 0 && arr[mid] == arr[mid-1]) {
//             int pairind = mid-1;
//             if (pairind & 1) {
//                 e = mid - 1;
//             }
//             else {
//                 s = mid + 1;
//             }

//         }
//         else if(mid + 1 < size && arr[mid] == arr[mid+1]) {
//             int pairind = mid;
//             if (pairind & 1) {
//                 e = mid - 1;
//             }
//             else {
//                 s = mid + 1;
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {1,1,2,2,3,3,4,4,5,6,6,4,4,2,2};
//     int size = 15;
//     int ans = oddocc(arr,size);
//     cout << arr[ans];
    
// }
#include <iostream>
using namespace std;
#include<vector>


int countvow(string s, int l, int r) {
    int c =0;
    while (l <= r) {
        if (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') {
            c++;
        }
        l++;
    }
    return c;
}

int main() {
    string s= "abciiidef";
    int k = 2;
    int l = 0;
    int r = l+k;
    int n = sizeof(s)/sizeof(s[0]);
    int ans = 0;
    while (r != n) {
        int cnt = countvow(s,l,r);
        if (cnt > ans) {
            ans = cnt;
        }
    }
    cout << ans;   
}

