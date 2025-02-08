#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

double mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;
        while (s <= e) { 
            long long int mid = s + (e - s) / 2;
            long long int product = mid * mid;
            if (product == x) {
                return mid;
            } 
            else if (product < x) {
                ans = mid;
                s = mid + 1;
            } 
            else {
                e = mid - 1;
            }
        }
        double sqrtans = (double) ans;
        int precision = 1;
        int factor = 1;
        for (int i=0; i<precision; i++) {
            factor = factor /10.0;
            for (int n=0; n<=9; n++) {
                int toAdd = factor * n;
                if (sqrtans + toAdd < x) {
                    sqrtans += toAdd;
                }
                else {
                    break;
                }

            }
        }
    }

int main() {
    int num = 54;
    double ans = mySqrt(num);
    cout << ans;
    

}
