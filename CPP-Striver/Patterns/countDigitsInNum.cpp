#include <iostream>
#include <vector>

using namespace std;

int digitCount(int a) {
    int i = 0;
    int digits = 0;
    while (i<a) {
        a = a/10;
        digits++;
    }
    return digits;
}

int main() {
    cout << "Enter a number - ";
    int x;
    cin >> x;
    cout << "Total digits in the number are - " << digitCount(x);
    return 0; 
}
