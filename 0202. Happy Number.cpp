#include <bits/stdc++.h>
using namespace std;

long long getNextNum(int n)
{
    long long newNum = 0;
    while(num){
        int digit = num % 10;
        newNum += digit * digit;
        num /= 10;
    }
    return newNum;
}

bool isHappy(int n) {
    unordered_set<long long> seen;
    while(n != 1 || !seen.count(n)){
        seen.insert(n);
        n = getNextNum(n);
    }
    return n == 1;

}

int main()
{
    int n; cin >> n;
    cout << isHappy(n);
}
