#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int l = 0, r = s.size() - 1;
    while(l < r){
        swap(s[l], s[r]);
        ++l;
        --r;
    }
}
int main()
{
    vector<char> s;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        char x; cin >> x;
        s.push_back(x);
    }
    reverseString(s);
    for(char c : s) cout << c << " ";
}
