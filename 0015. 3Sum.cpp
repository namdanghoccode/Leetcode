#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;

    sort(nums.begin(), nums.end());

    int n = nums.size();
    for(int i = 0; i < n - 2; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        int l = i + 1;
        int r = n - 1;
        while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum < 0) l++;
            else if(sum > 0) r--;
            else{
                result.push_back({nums[i], nums[l], nums[r]});
                while(l < r && nums[l] == nums[l+1]) ++l;
                while(l < r && nums[r] == nums[r-1]) --r;
                ++l; --r;
            }
        }
    }

    return result;
}


int main()
{
    vector<int> nums;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> triplets = threeSum(nums);
    for(const auto& triplet : triplets){
        for(int num : triplet){
            cout << num << " ";
        }
        cout << endl;
    }

    system("pause");
}
