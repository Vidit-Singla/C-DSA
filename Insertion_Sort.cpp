#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>

void insertionsort(vector<int>&v) {
    int n = v.size();
    for (int i = 1; i<n; i++) {
        int key = v[i];
        int j = i-1;
        while (j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main() {
    vector<int>v = {5,4,3,2,1};
    insertionsort(v);
    for (int e:v) {
        cout << e << " ";
    }
     
}


