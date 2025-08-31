#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void quick(int arr[], int s, int e) {
    if (s >= e) return;
    int pivot = e;
    int i = s - 1;
    int j = s;
    while (j < pivot) {
        if (arr[j] < arr[pivot]) {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quick(arr, s, i - 1);
    quick(arr, i + 1, e);
}

int main() {
    int arr[] = {10, 80, 110, 90, 50, 30, 40, 20};
    int size = 8;
    int s = 0;
    int e = size - 1;
    quick(arr, s, e);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}