class Solution {
public:

    bool canbloom(vector<int>bloomDay, int m, int k, int day) {
        int c = 0;
        for (int i=0; i<bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                c++;
            }
            if (c == k) {
                c = 0;
                m--;
                if (m==0) {
                    break;
                }
            }
            if (bloomDay[i] > day) {
                c=0;
            }
        }
        return m==0;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int req = (long long int)m * (long long int)k;
        if (bloomDay.size() < req) {
            return - 1;
        }
        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = 0;

        while (s <= e) {
            int mid = s + (e-s)/2;
            int day = mid;
            if (canbloom(bloomDay, m,k,day)) {
                ans = day;
                e = mid-1;
            }
            else {
                s = mid+1;
            }
        }
        return ans; 
    }
};