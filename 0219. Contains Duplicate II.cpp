#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        for (int i = 0; i < nums.size(); ++i) {
            if (window.count(nums[i])) return true;
            window.insert(nums[i]);
            if (window.size() > k) {
                window.erase(nums[i - k]); 
            }
        }
        return false;
    }
};


int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int k; cin >> k;

    Solution sol;
    bool ans = sol.containsNearbyDuplicate(nums, k);
    cout << ans;

    system("pause");
    return 0;
}