#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1;
    int ans = 0;
    while(l < r){
        int minHeight = min(height[l], height[r]);
        int width = r - l;
        ans = max(ans, minHeight * width);

        if(height[l] < height[r]){
            ++l;
        }
        else --r;
    }
    return ans;
}

int main()
{
    int n; cin >> n;
    vector<int> height(n);
    for(int i = 0; i < n; i++) cin >> height[i];
    cout << maxArea(height);
}
