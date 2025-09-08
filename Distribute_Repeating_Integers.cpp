class Solution {
public:

    bool solve(vector<int>&counts, vector<int>& quantity, int ith){
        if(ith == quantity.size()){
            return true;
        }

        for(int i=0; i<counts.size(); i++){
            if(counts[i] >= quantity[ith]){
                counts[i] -= quantity[ith];
                if(solve(counts, quantity, ith+1)){
                    return true;
                }
                counts[i] += quantity[ith];
            }
        }
        return false;
    }

    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int,int>countMap;
        for(auto num:nums){
            countMap[num]++;
        }
        vector<int>counts;
        for(auto it:countMap){
            counts.push_back(it.second);
        }
        sort(quantity.rbegin(), quantity.rend());
        return solve(counts, quantity, 0);
    }
};