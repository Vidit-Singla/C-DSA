#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>

bool ispos(vector<int>stalls, int k, int mid) {
    int c = 1;
    int pos = stalls[0];
    for (int i=1; i<stalls.size(); i++) {
        if (stalls[i] - pos >= mid){
            c++;
            pos = stalls[i];
        }
        if (c == k) return true;
    }
    return false;
}

int main() {
    vector<int>stalls = {1,2,4,8,9};
    int k = 3;
    sort(stalls.begin(),stalls.end());
    int s= 0;
    int e= stalls[stalls.size()-1] - stalls[0]; 
    int ans = -1;
    while (s<=e) {
        int mid = s + (e-s)/2;
        if (ispos(stalls,k,mid)){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid-1;
        }
    }
    cout << ans; 
}


