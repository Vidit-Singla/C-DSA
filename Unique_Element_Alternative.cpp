#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,0,2,1,0};
    int n = 5;
    bool uniq;
    for (int i=0; i<n; i++) {
        uniq = true;
        for (int j=0; j<n; j++) {
            if (arr[i] == arr[j] && i!=j) {
                uniq = false;
                break;
            }
            
        }
        if (uniq) {
            cout << arr[i];
            break;
        }
        
        
    }
    



return 0;
}