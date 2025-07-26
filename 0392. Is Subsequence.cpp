#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int i = 0, j = 0;
            int n = s.length(), m = t.length();

            for(int i = 0; i < m; i++){
                if(t[i] == s[j]){
                    ++j;
                }
            }

            return j == n;
        }
};

int main(){
    string s, t; cin >> s >> t;

    Solution sol;
    bool ans = sol.isSubsequence(s, t);
    cout << ans;

    system("pause");
    return 0;
}