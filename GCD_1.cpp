#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<map>

int gcd(int a,int b) {
    if (a==0) return b;
    if (b==0) return a;
    while (a>0 && b>0) {
        if (a>b) {
            a -= b;
        }
        else if (a<b) {
            b -= a;
        }
    }
    return a==0 ? b : a;
}


int main() {
    int a = 3;
    int b = 6;
    int ans = gcd(a,b);
    cout << ans;
}


