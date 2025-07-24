#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    // Boyer-Moore Majority Voting Algorithm
    int candidate = -1;
    int votes = 0;

    for(int num : nums){
        if(vote == 0){
            candidate = num;
            votes = 1;
        }
        else{
            if(num == candidate) votes++;
            else votes--;
        }
    }

    int cnt = 0;
    for(int num : nums){
        if(num == candidate) cnt++;
    }
    if(cnt > nums.size() / 2) return candidate;

    return -1;

int main()
{
    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << majorityElement(nums);
}
