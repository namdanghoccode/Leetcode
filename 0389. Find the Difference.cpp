#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t) {
    char result = 0;

    for(char c : s) result ^= c;
    for(char d : t) result ^= d;

    return result;
}

int main()
{
    string s, t; cin >> s >> t;
    cout << findTheDifference(s, t);
}
