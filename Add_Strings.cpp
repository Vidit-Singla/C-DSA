class Solution {
public:
    string addRe(string num1, int p1, string num2, int p2, int carry = 0) {
        if(p1 < 0 && p2 < 0) {
            return carry != 0 ? string(1, carry + '0') : "";
        }
        
        int n1 = (p1 >= 0) ? num1[p1] - '0' : 0;
        int n2 = (p2 >= 0) ? num2[p2] - '0' : 0;
        int csum = n1 + n2 + carry;
        
        string ans;
        ans.push_back(csum % 10 + '0');
        ans += addRe(num1, p1-1, num2, p2-1, csum / 10);
        
        return ans;
    }

    string addStrings(string num1, string num2) {
        string ans = addRe(num1, num1.size()-1, num2, num2.size()-1);
        reverse(ans.begin(), ans.end());
        return ans;
    }  
};