#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>

vector<int> twopoint(vector<int>a, int k, int x) {
    int l = 0;
    int h = a.size()-1;
    vector<int>ans;
    while (h-l >= k) {
        if (x-a[l] > a[h] - x) {
            l++;
        }
        else {
            h--;
        }
    }
    for (int i=l; i<=h; i++) {
        ans.push_back(a[i]);
    }
    return ans;
}

int main() {
    vector<int>a = {12,16,22,30,35,39,42,45,48,50,53,55,56};
    int k = 4;
    int x = 35;
    vector<int>an = twopoint(a,k,x);
    for (int i=0; i<k; i++) {
        cout <<an[i] << endl;
    }
    


     
}


