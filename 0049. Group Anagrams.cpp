#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> mp;

            for(string s : strs){
                string tmp = s;
                sort(tmp.begin(), tmp.end());
                mp[tmp].push_back(s);
            }

            vector<vector<string>> ans;
            for(auto it = mp.begin(); it != mp.end(); it++){
                ans.push_back(it->second);
            }

            return ans;
        }
};

int main(){
    int n; cin >> n;
    vector<string> strs(n);
    for(int i = 0; i < n; i++) cin >> strs[i];

    Solution sol;
    vector<vector<string>> ans =  sol.groupAnagrams(strs);
    for(auto arr : ans){
        for(auto s : arr){
            cout << s << " ";
        }
        cout << endl;
    }

    system("pause");
}