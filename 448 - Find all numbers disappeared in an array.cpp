#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int cnt[100001];
    memsize(cnt, sizeof(cnt), 0);
    vector<int> tmp;
    for(int i = 0; i < nums.size(); i++){
        cnt[nums[i]] = 1;
    }
    for(int i = 1; i <= nums.size(); i++){
        if(cnt[i] == 0) tmp.push_back(i);
    }
    return tmp;
}

int main()
{
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        nums.push_back(x);
    }
    vector<int> result = findDisappearedNumbers(nums);
    for(int num : result) cout << num << " ";
}
