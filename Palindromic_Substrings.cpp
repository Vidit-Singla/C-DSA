class Solution {
    public:
    
        int expand(string str, int i, int j) {
            int c = 0;
            while (i>=0 && j<str.length() && str[i] == str[j]){
                c++;
                i--;
                j++;
            }
            return c;
        }
    
        int countSubstrings(string s) {
            int total = 0;
            for (int centre = 0; centre<s.length(); centre++){
                int i=centre;
                int j=centre;
                int oddcount = expand(s,i,j);
                i = centre;
                j = centre+1;
                int evencount = expand(s,i,j);
                total += oddcount + evencount;
    
            }
        return total;
        }
    };