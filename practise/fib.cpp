#include <bits/stdc++.h>
using namespace std;

int fibonnacci(int n){
    int res = 0;
    res = fibonnacci(n-1) + fibonnacci(n-2);
    return res; 
}

int main() {
    int n;
    cout << "Enter number to generate the fibonacci series till - ";
    cin >> n;
    cout << fibonnacci(n);

}