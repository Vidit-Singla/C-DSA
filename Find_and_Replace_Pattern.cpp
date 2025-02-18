class Solution {
public:

    void normalise(string &str) {
        char start  = 'a';
        unordered_map<char,char> mapping;
        for (int i=0 ; i<str.length() ; i++) {
            char current = str[i];
            if (mapping.find(current) == mapping.end()) {
                mapping[current] = start;
                start++;
            }
        }
        for (int i=0 ; i<str.length(); i++) {
            char mappedchar = mapping[str[i]];
            str[i] = mappedchar;
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>final;
        normalise(pattern);
        for (int i=0 ; i<words.size(); i++){
            string current = words[i];
            string ans = current;
            normalise(ans);
            if (ans == pattern) {
                final.push_back(current);
            }

        }
        return final;
    }
};