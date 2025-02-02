#include <iostream>
#include <unordered_map>
#include<limits.h>
using namespace std;

int main() {
    int n = 7;
    int a[]= {1,5,3,4,3,5,6};
    unordered_map<int,int>hash;
    for(int i=0; i<n; i++) {
        hash[a[i]]++;
    }
    for (int i=0; i<n; i++) {
        if (hash[a[i]] > 1) {
            cout << a[i];
            return 0;
        }
    }
    
    
}