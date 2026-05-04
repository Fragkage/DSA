#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<< "Enter number of elements - ";
    int n;
    cin>> n;

    vector <int> vec(n);

    cout<< "Enter numbers for the vector - ";
    
    for (int& x : vec) {
        cin >> x;
    }

    for (int i=0; i<n; i++) {
        cout<< vec[i] << " ";
    }

    for (int x : vec){
        cout << x << " ";
    }
}