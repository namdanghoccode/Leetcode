#include <bits/stdc++.h>
using namespace std;


vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    for(int i = n-1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i]++;
            return digits;
        } else{
            digits[i] = 0;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    vector<int> digits;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        digits.push_back(x);
    }
    digits = plusOne(digits);
    for(int num : digits) cout << num << " ";

    system("pause");
}
