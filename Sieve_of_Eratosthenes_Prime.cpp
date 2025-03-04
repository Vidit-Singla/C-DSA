#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<map>

int countp(int n) {
    if (n==0) return 0;
    vector<bool>prime(n,true);
    prime[0] = prime[1] = false;

    int ans = 0;

    for (int i=2; i<n;i++){
        if (prime[i]){
            ans++;
            int j = 2*i;
            while (j<n) {
                ans[j] = false;
                j += i;
            }
        }
    }
    return ans;

}


int main() {
    int n = 21;
    int fans = countp(n);
    cout << n;
}


#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<map>

int countp(int n) {
    if (n==0) return 0;
    vector<bool>prime(n,true);
    prime[0] = prime[1] = false;

    int ans = 0;

    for (int i=2; i<n;i++){
        if (prime[i]){
            ans++;
            int j = 2*i;
            while (j<n) {
                ans[j] = false;
                j += i;
            }
        }
    }
    return ans;

}


int main() {
    int n = 21;
    int fans = countp(n);
    cout << n;
}


