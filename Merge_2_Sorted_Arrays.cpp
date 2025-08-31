#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include <cmath>
#include<unordered_map>
#include<map>

void merge(int arr[], int brr[], int n1, int n2, vector<int>&ans){
    int i=0; 
    int j=0;
    while(i<n1 && j<n2){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else if(brr[j]<arr[i]){
            ans.push_back(brr[j]);
            j++;
        }
    }
    while(i<n1){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<n2){
        ans.push_back(brr[j]);
        j++;
    }
}

int main() {
    int arr[] = {10,30,50,60};
    int brr[] = {20,40,45,61};
    int n1 = 4;
    int n2 = 4;
    vector<int> ans;
    merge(arr,brr,n1,n2,ans);
    for(int num:ans){
        cout << num << " ";
    }
}
