#include <bits/stdc++.h>
using namespace std;

void buildArray(vector<int> &f)
{
    f.resize(46);
    f[1] = 1;
    f[2] = 2;
    for(int i = 3; i <= 45; i++){
        f[i] = f[i-1] + f[i-2];
    }
}

int climbStairs(int n) {
    vector<int> f;
    buildArray(f);
    return f[n];
}

int main()
{
    int n; cin >> n;
    cout << climbStairs(n);

    system("pause");
}
