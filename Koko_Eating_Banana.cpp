class Solution {
public:

    bool cankokofinish(vector<int>piles,int h,int k) {
        long long int total = 0;
        for (int i = 0; i<piles.size(); i++) {
            total += ceil(piles[i]/(double)k);
        }
        return total <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        //auto it =  max_element(piles.begin(), piles.end());
        int e = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while (s <= e) {
            int mid = s + (e-s)/2;
            int k = mid;
            if (cankokofinish(piles,h,k)) {
                ans = k;
                e = mid-1;
            }
            else {
                s = mid+1;
            }
        }
        return ans;

        
    }
};