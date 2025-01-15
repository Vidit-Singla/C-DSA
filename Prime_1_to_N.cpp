#include<iostream>
using namespace std;

bool primechecker(int n) {
    for (int i=2; i<=n/2; i++) {
        if (n%i ==0) {
            
            return false;       
        }   
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        if (primechecker(i)) {
            cout << i << endl;
        }
    }
    

    return 0;   
}