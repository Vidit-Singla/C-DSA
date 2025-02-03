#include <iostream>
using namespace std;

int main() {
    int arr[6] = {-1,2,-1,0,1,-1};
    int n = 5;
    for (int i=0; i<n;i++){
        for (int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++) {
                if(arr[i] + arr[j]+ arr[k] == 0) {
                    cout << "["<<arr[i] << " "<< arr[j]<<" "<< arr[k] << "]";
                }
            }
        }
    }
    return 0;
}
