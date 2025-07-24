#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
    if(num1.size() < num2.size()) swap(num1, num2);

    int n = num1.size(), m = num2.size();
    string result = "";
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int carry = 0;

    for(int i = 0; i < m; i++){
        int tmp = (num1[i] - '0') + (num2[i] - '0') + carry;
        carry = tmp / 10;
        result += (tmp % 10) + '0';
    }
    for(int j = m; j < n; j++){
        int tmp = (num1[j] - '0') + carry;
        carry = tmp / 10;
        result += (tmp % 10) + '0';
    }
    if(carry) result += '1';
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string num1, num2; cin >> num1 >> num2;
    cout << addStrings(num1, num2);

    system("pause");
}
