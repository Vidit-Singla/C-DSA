#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row +1; col++){
            if (row == 0 || row == n-1 || col == 0 || col == row) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
    cout << endl;
    }


    return 0;
}
    

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int totalcol;
//     for (int row=0; row<n; row++) {
//         totalcol = row+1;
//         for (int col=0; col<row+1; col++) {
//             if (row == 0 || row == 1 || row == n-1 || col == 0 || col == totalcol-1) {
//                 cout << "*";
//             }
            
//             else {
//                     cout << " ";
//                 }
//             }
//             cout << endl;
//         }
        
//         return 0 ;
//     }






    
    
    

    


