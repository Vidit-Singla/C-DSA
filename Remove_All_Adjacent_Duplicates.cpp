class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();
        for (int i=0 ; i<n; i++) {
            char cur = s[i];
            if (ans.empty()) {
                ans.push_back(cur);
            }
            else if (cur == ans.back()) {
                ans.pop_back();
            }
            else {
                ans.push_back(cur);
            }
        }
        return ans;
        
    }
};