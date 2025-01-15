#include<iostream>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    int mask = 1 << k;
    int ans = n | mask;
    cout << ans;
    return 0;   
}