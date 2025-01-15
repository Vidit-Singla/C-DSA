#include<iostream>
using namespace std;

int main() {
    int numofdig,digit;
    int num = 0;
    cin >> numofdig;
    for (int i=0; i<numofdig; i++){
        cin >> digit;
        num = num*10 + digit;
    }
    cout << num;

    return 0;
}