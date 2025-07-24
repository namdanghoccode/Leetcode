#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            if(digits.empty()) return {};
            
            int n = digits.length();

            vector<string> d(10);
            d[0] = "";
            d[1] = "";
            d[2] = "abc";
            d[3] = "def";
            d[4] = "ghi";
            d[5] = "jkl";
            d[6] = "mno";
            d[7] = "pqrs";
            d[8] = "tuv";
            d[9] = "wxyz";

            vector<string> res;
            string current;

            function<void(int)> backtrack = [&](int i){
                if(i == n){
                    res.push_back(current);
                    return;
                }

                int nums = digits[i] - '0';
                for(int j = 0; j <  d[nums].length(); j++){
                    current.push_back(d[nums][j]);
                    backtrack(i + 1);
                    current.pop_back();
                }
            };

            backtrack(0);
            return res;
        }
};

int main(){
    string digits; cin >> digits;

    Solution sol;
    vector<string> ans = sol.letterCombinations(digits);

    for(auto s : ans){
        cout << s << " ";
    }
    cout << endl;

    system("pause");
}