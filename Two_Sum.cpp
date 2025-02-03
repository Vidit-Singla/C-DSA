#include <iostream>
using namespace std;
//HW alternate soln for xor question
//HW 1s and 2s compliment
pair<int,int> checktwo(int arr[],int n) {
    pair<int,int> ans = make_pair(-1,-1);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i]+arr[j] == 15) {
                // return true;
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }  
}
int main() {
    int arr[5] = {10,5,20,15,30};
    int n = 5;
    pair<int,int> ans = checktwo(arr,n);
    cout << ans.first << " " << ans.second << endl;
    // bool ans = checktwo(arr,n);
    // if (ans) {
    //     cout << "Pair Found";
    // }
    // else {
    //     cout << "No such pair found";
    // }
    
    
    return 0;
}
