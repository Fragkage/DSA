#include <bits/stdc++.h>
using namespace std;

int reverseInt(int n) {
    int reverse= 0;
    while (n>0) {
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    return reverse;
}

void checkPalindrome(int n){
      if (reverseInt(n) == n) {
        cout << "the number is palindrome";
      }
      else {
        cout << "The number is not a palindrome";
      }
}

int main(){
    int n ;
    cout << "Enter a number to check if its a palindrome";
    cin >>  n;
    checkPalindrome(n);
}