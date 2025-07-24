#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    if(x == 1) return 1;
    int ans = 0;
    int l = 1, r = x / 2;
    while(l <= r){
        int m = (l + r) / 2;
        if(m * m <= x){
            ans = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return ans;
}

int main()
{
    int x; cin >> x;
    cout << mySqrt(x);
}
