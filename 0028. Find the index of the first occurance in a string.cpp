#include <bits/stdc++.h>
using namespace std;

string haystack, needle;

void input()
{
    cin >> haystack >> needle;
}

int strStr(string haystack, string needle)
{
    int i = 0, j = 0;
    int ans = -1;
    int n = haystack.size(), m = needle.size();
    for(int i = 0; i < n; i++){
        string tmp = haystack.substr(i, m);
        if(tmp == needle) return i;
    }

    return ans;
}

int main()
{
    input();
    cout << strStr(haystack, needle);

    system("pause");
}
