#include <iostream>
using namespace std;

string permutation(string &str, int i){
    if(i >= str.length()){
        cout << str << endl;
    }
    for(int j=i; j<str.length(); j++){
        swap(str[i], str[j]);
        permutation(str, i+1);
        swap(str[i],str[j]);
    }
}

int main(){
    string str = "abcd";
    int i=0;
    permutation(str,i);
}