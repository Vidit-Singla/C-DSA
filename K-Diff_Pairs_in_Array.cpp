class Solution {
public:

    bool isdiff(vector<int>nums, int s, int target) {
        int e = nums.size()-1;
        while (s <= e) {
            int mid = s + (e-s)/2;
            if (nums[mid] == target) {
                return true;
            }
            else if (nums[mid] < target) {
                s = mid+1;
            }
            else {
                e = mid-1;
            }
        }
        return false;
    }

    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int c = 0;
        sort(nums.begin(),nums.end());
        for (int i=0; i<n; i++) {
            if (i > 0 && nums[i-1] == nums[i]) {
                continue;
            }
            if (isdiff(nums, i+1, nums[i]+k)) {
                c++;
            }
        }
        return c;
    }
};