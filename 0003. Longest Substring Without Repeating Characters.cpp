#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> seen(256, 0);
    int l = 0, ans = 0;
    for(int r = 0; r < s.size(); r++){
        while(seen[s[r]]){
            seen[s[l]] = 0;
            l++;
        }
        seen[s[r]] = 1;
        ans = max(ans, r - l + 1);
    }
    return ans;
}

int main()
{
    string s; cin >> s;
    cout << lengthOfLongestSubstring(s);
}
