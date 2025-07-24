#include <bits/stdc++.h>
using namespace std;

int n;
int target;
vector<int> nums;

void input()
{
    cin >> n >> target;
    nums.resize(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
}

int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size( ) - 1;
        while(l <= r){
            int m = (l + r) / 2;
            if(nums[m] == target) return m;
            else if(nums[m] < target) l = m + 1;
            else r = m - 1;
        }
        return l;
    }

int main()
{
    input();
    cout << searchInsert(nums, target);
}
