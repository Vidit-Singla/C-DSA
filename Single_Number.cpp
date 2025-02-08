#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


int main() {
    vector<int>arr = {1,1,3,4,5,3,4};
    sort(arr.begin(), arr.end());
    unordered_map<int,int>occur;
    for (int e: arr) {
        occur[e]++;
    }
    for (auto itr = occur.begin(); itr != occur.end(); itr++) {
        if (itr -> second == 1) {
            cout << itr -> first;
            return 0;
        }
    }


}
