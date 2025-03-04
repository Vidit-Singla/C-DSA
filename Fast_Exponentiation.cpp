#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<map>

int exp(int a,int b) {
    int ans = 1;
    while (b > 0) {
        if (b&1) {
            ans = ans*a;
        }
        a *= a;
        b>>=1;
    }
    return ans;
    
}


int main() {
    int a = 3;
    int b = 2;
    int ans = exp(a,b);
    cout << ans;
}


