class Solution {
public:

    void Solve(vector<int>&C, int target, vector<int> &curr, vector<vector<int>>&ans, int ind){
        if(target == 0){
            ans.push_back(curr);
        }
        if(target < 0){
            return;
        }
        for(int i=ind; i<C.size(); i++){
            if(i > ind && C[i] == C[i-1]){
                continue;
            }
            curr.push_back(C[i]);
            Solve(C, target-C[i], curr, ans, i+1);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>>ans;
        sort(candidates.begin(), candidates.end());
        Solve(candidates, target, curr, ans, 0);
        return ans;
    }
};