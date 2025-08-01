#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include <cmath>
#include<unordered_map>
#include<map>

int check(int arr[], int i,int s){
    if (i==s){
        return 1;
    }
    if (arr[i] > arr[i+1]){
        return 0;
    }
    check(arr,i+1,s);
}

int main() {
    // int arr[] = {1,2,3,4,5};
    int brr[] = {1};
    int index = 0;
    int size = 1;
    int ans = check(brr,index,size);
    if (ans) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}