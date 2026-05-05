#include <bits/stdc++.h>
using namespace std;

string mergestringalternately(string a, string b) {
    int i=0;
    int j = 0;
    string res= "";

    while (i<a.size() && j <b.size())
    {
        res += a[i++];
        res += b[j++];
    }
    while (i<a.size())
    {
        res += a[i++];
    }
    while (i<b.size())
    {
        res += b[j++];
    }
    return res;
}

int main() {
    string word1, word2;

    cout << "Enter the first word - "; 
    cin >> word1;

    cout << "Enter the second word - ";
    cin >> word2;

    cout << mergestringalternately(word1, word2);
}