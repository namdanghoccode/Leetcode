#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mp;

            for(int i = 0; i < nums.size(); i++){
                int need = target - nums[i];
                if(mp.count(need)){
                    return {mp[need], i};
                }
                mp[nums[i]] = i;
            }
            return {};
        }
};

int main(){
    int n, target; cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    vector<int> ans = sol.twoSum(nums, target);

    for(int num : ans) cout << num;

    system("pause");
}