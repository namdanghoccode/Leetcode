#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = n * (n+1) / 2;
    int sum = 0;
    for(int num : nums){
        sum += num;
    }
    return total - sum;
}

int main()
{
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        nums.push_back(x);
    }
    cout << missingNumber(nums);
}
