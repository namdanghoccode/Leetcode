#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n - 3; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j = i + 1; j < n - 2; j++){
            if(j > i + 1 && nums[j] == nums[j-1]) continue;
            long long subtarget = (long long)target - nums[i] - nums[j];
            int l = j + 1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = nums[l] + nums[r];
                if(sum == subtarget){
                    res.push_back({nums[i], nums[j], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l+1]) l++;
                    while(l < r && nums[r] == nums[r-1]) r--;
                    l++; r--;
                }
                else if(sum < subtarget){
                    l++;
                }
                else if(sum > subtarget){
                    r--;
                }
            }
        }
    }
    return res;
}

int main()
{
    int n, target; cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<vector<int>> ans = fourSum(nums, target);
    for(auto arr : ans){
        for(int num : arr){
            cout << num << " ";
        }
        cout << endl;
    }
}
