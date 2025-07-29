#include<iostream>
using namespace std;

void printsubsequence(string str, int i, string output){
    if (i == str.length()){
        cout << output << endl;
        return;
    }
    char ch = str[i];
    printsubsequence(str, i+1, output+ch);
    printsubsequence(str,i+1,output);
}

int main() {
    string str = "abc";
    string output = "";
    int index = 0;
    printsubsequence(str,index,output);
}
