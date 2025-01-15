#include<iostream>
using namespace std;

int main() {
    int n,last;
    cin >> n;
    int cnt = 0;
    while (n!=0) {
        last = n&1;
        if (last == 1) {
            cnt += 1;
        }
        n = n>>1;
    }
    cout << cnt;
    return 0;
}