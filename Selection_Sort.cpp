#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>


void selectionsort(vector<int>&v) {
    int n = v.size();
    for (int i=0; i<n-1; i++) {
        int min_index = i;
        for (int j=i+1; j<n; j++) {
            if (v[j] < v[min_index]) {
                swap(v[j], v[min_index]);
            }
        }
    }
}

int main() {
    vector<int>v = {5,4,3,2,1};
    
    selectionsort(v);
    for (int e:v) {
        cout << e << " ";
    }
     
}


