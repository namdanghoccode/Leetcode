#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]){
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        nums.push_back(x);
    }
    cout << containsDuplicate(nums);
}
