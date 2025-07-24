#include <bits/stdc++.h>
using namespace std;

// a xor a = 0
// a xor 0 = a

int singleNumber(vector<int>& nums) {
    int result = 0;
    for(int num : nums){
        result ^= num;
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
    cout << singleNumber(nums);

    system("pause");
}
