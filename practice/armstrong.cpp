#include <bits/stdc++.h>
using namespace std;

void isArmstrong(int a) {
    int temp = 0;
    int original = a;
    while(a>0) {
        temp = temp + (a%10) * (a%10) * (a%10);
        a = a/10;
    }
    if (temp == original) {
        cout << "The number is a Armstrong number";
    }
    else {
        cout << "The number is not a Armstrong number";
    }
}

int main() {
    int n;
    cout << "Enter number to check if its an Armstrong number - ";
    cin >> n; 
    isArmstrong(n);
}  