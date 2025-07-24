#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1, s2;
    vector<int> v;
    for(int num : nums1){
        s1.insert(num);
    }
    for(int num : nums2){
        s2.insert(num);
    }
    for(auto it = s1.begin(); it != s1.end(); it++){
        if(s2.count(*it)){
            v.push_back(*it);
        }
    }
    return v;
}

int main()
{
    int n, m; cin >> n >> m;
    vector<int> nums1, nums2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        nums1.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        nums1.push_back(x);
    }
    vector<int> result = intersection(nums1, nums2);
    for(int num : result) cout << num << " ";

    system("pause");
}
