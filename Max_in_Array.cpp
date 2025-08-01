#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include <cmath>
#include<unordered_map>
#include<map>

void maxinarr(int arr[], int size, int index,int ans) {
    if (index==size) {
        cout << ans;
    }
    ans = max(ans,arr[index]);
    maxinarr(arr,size,index+1,ans);
}


int main() {
    int arr[] = {10,300,20,50,90};
    int size = 5;
    int index = 0;
    maxinarr(arr,size,index,0);

    return 0;
    
    
}