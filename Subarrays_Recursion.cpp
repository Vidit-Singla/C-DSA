#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(int arr[], int size, int index, string output) {
    if (index == size) {
        cout << output << endl;
        return;
    }
    solve(arr, size, index + 1, output + to_string(arr[index]) + " ");
    solve(arr, size, index + 1, output);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    string output = "";
    solve(arr, size, index, output);
    return 0;
}