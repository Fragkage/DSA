#include <bits/stdc++.h>
using namespace std; 

int arrMax(int arr[], int size) {
    int max= arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i]>= max) {
            max  = arr[i];
        }
    }
    return max;
}

int main() { 
    int n;
    cout << "Enter the size of the array - ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i =0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Max element: " << arrMax(arr, n) << endl;


}