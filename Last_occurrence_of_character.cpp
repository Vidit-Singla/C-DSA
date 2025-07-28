#include <iostream>
using namespace std;

int find(string s, char c, int i, int ans) {
    if(i == s.size()){
        return (ans == -1 ) ? -1 : ans;
    }

    if(s[i] == c){
        ans = i;
    }
    return find(s,c,i+1,ans); 
}

int main() {
    string s = "abcddef";
    char c = 'd';
    int i = 0;
    cout << find(s,c,i,-1);
}