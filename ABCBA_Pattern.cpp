#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for (int row = 0; row < n; row++) {
        char ch = 'A';
        
        for (int col = 0; col < row+1; col++){           
            cout << ch;
            ch++;
        }
        ch--;
        while (ch > 'A') {
            ch--;
            cout << ch;
        }

        
        cout << endl;
    }
    
    return 0;
}