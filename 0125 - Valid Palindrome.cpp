#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string tmp1 = "";
    for(char c : s){
        c = tolower(c);
        if(isalnum(c)){
            tmp1 += c;
        }
    }
    string tmp2 = tmp1;
    reverse(tmp1.begin(), tmp1.end());
    return tmp1 == tmp2;
}

int main()
{
    string s; cin >> s;
    cout << isPalindrome(s);
}
