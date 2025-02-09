#include <iostream>
using namespace std;
#include<vector>

int getquotient(int dividend, int divisor) {
    int s = -dividend;
    int e = dividend;
    int ans = -1;
    while (s <= e) {
        int mid = s + ((e-s)>>1);
        if (mid * divisor == dividend) {
            return mid;
        }
        else if (mid * divisor < dividend) {
            ans = mid;
            s= mid + 1;
        }
        else {
            e = mid -1;
        }

    }
    return ans;
}

int main() {
    int dividend = 15;
    int divisor = -3;
    int ans = getquotient(abs(dividend),abs(divisor));
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        cout << ans*(-1);
    }
    else {
        cout << ans;
    }
    return 0;
}
