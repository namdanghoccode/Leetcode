#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    int pos = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(nums[m] == target) return m;
        else if(nums[m] < target) l = m + 1;
        else r = m - 1;
    }
    return pos;
}

int main()
{
    int n, target; cin >> n >> target;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        nums.push_back(x);
    }
    cout << search(nums, target);

    system("pause");
}
