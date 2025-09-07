class Solution {
public:

    void solve(vector<int>& candidates, int target, vector<vector<int>>&ans, vector<int>&curr,int ind){

        if(target == 0){
            ans.push_back(curr);
            return;

        }

        if(target < 0){
            return;
        }

        for(int i=ind; i<candidates.size(); i++){
            curr.push_back(candidates[i]);
            solve(candidates, target - candidates[i], ans, curr, i);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        solve(candidates, target, ans, curr,0);
        return ans;
    }
};