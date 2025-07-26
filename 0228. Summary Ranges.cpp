#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<string> summaryRanges(vector<int>& nums) {
            vector<string> res;
            int n = nums.size();
            if(n == 0) return res; 
            
            int start = nums[0];
            for(int i = 1; i <= n; i++){
                if(i == n || nums[i] != nums[i-1] + 1){
                    if(nums[i-1] == start){
                        res.push_back(to_string(start));
                    }
                    else{
                        res.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                    }
                    if(i < n) start = nums[i];
                }
            }
            return res;
        }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    vector<string> ans = sol.summaryRanges(nums);
    for(const string& s : ans) cout << s << " ";
    cout << endl;

    system("pause");
}