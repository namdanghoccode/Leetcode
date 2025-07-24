#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    vector<int> f(31, 0);
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= 30; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main()
{
    int n; cin >> n;
    cout << fib(n);

    system("pause");
}
