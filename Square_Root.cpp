#include <iostream>
using namespace std;

int main() {
    int num = 54;
    int s = 0, e = num;
    double ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (mid * mid == num) {
            ans = mid;
            cout << ans; 
            return 0;
        } 
        else if (mid * mid < num) {
            ans = mid; 
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }

    double factor = 0.1;
    int precision = 5;
    
    for (int i = 0; i < precision; i++) {
        while ((ans + factor) * (ans + factor) <= num) {
            ans += factor;
        }
        factor /= 10;
    }

    cout << ans; 
    return 0;
}
