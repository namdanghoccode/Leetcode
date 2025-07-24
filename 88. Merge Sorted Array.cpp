#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while(i > 0 && j > 0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else{
            nums1[k] = nums2[j];
            k--; j--;
        }
    }
    while(j > 0){
        nums1[k] = nums2[j];
        k--; j--;
    }
    while(i > 0){
        nums1[k] = nums1[i];
        k--; i--;
    }
}

int main()
{
    int m, n; cin >> n >> m;
    vector<int> nums1(m + n, 0);
    vector<int> nums2(n, 0);
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        nums1[i] = x;
    }
    for(int i = 0; i < n; i++){
        int y; cin >> y;
        nums2[i] = y;
    }
}
