#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>

void bubblesort(vector<int>&v) {
    int n = v.size();
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }

}

int main() {
    vector<int>v = {5,4,3,2,1};
    bubblesort(v);
    
    for (int e:v) {
        cout << e << " ";
    }
     
}


