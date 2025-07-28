#include <iostream>
using namespace std;

string reverse(string s,int i, int h){
    if(i>=h){
        return s;
    }
    swap(s[i], s[h]);
    return reverse(s,i+1,h-1);
}

int main() {
    string s = "abcde";
    int i = 0;
    int h = s.size()-1;
    cout << reverse(s,i,h);
}