#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    unordered_map<int, int> mp;
    vector<int> result;

    for(int num : nums2){
        while(!st.empty() && num > st.top()){
            mp[st.top()] = num;
            st.pop();
        }
        st.push(num);
    }

    for(int num : nums1){
        if(mp.count(num)){
            result.push_back(mp[num]);
        }
        else{
            result.push_back(-1);
        }
    }
    return result;

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
        int y; cin >> y;
        nums2.push_back(y);
    }
    vector<int> result = nextGreaterElement(nums1, nums2);
    for(int num : result) cout << num << " ";

    system("pause");
}
