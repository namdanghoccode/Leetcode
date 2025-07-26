#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            unordered_map<char, int> count;
            for(char c : s){
                count[c - 'a']++;
            }
            for(char c : t){
                count[c - 'a']--;
            }

            for(auto it = count.begin(); it != count.end(); it++){
                if(it->second != 0) return false;
            }
            return true;
        }
};

int main(){
    string s, t; cin >> s >> t;

    Solution sol;
    bool ans = sol.isAnagram(s, t);
    cout << ans;

    system("pause");
}