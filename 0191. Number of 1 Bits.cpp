#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int hammingWeight(int n) {
            int cnt = 0;
            while(n != 0){
                cnt += (n & 1);
                n <<= 1;
            }
            return cnt;
        }
};

int main(){
    int n; cin >> n;

    Solution sol;
    int ans = sol.hammingWeight(n);
    cout << ans;
}