// revision for questions practiced yesterday (04-05-2026)
// LEETCODE BLIND 75 - MERGE STRINGS ALTERNATIVELY

#include <iostream>
#include <string>

using namespace std;

string straltmerge(string a, string b) {
    string res = "";
    int i=0;
    int j=0;

    while (i<a.size() && j<b.size()){
        res+= a[i++];
        res+= b[j++];
    }
    while (i<a.size()){
        res+= a[i++];
    }
    while (j<b.size()){
        res+= b[j++];
    }
    return res;
}

int main() {
    string str1;
    string str2;
    cout << "Enter the 1st string - ";
    cin >> str1;
    cout << "Enter the 2nd string - ";
    cin >> str2;

    cout << straltmerge(str1, str2);
}