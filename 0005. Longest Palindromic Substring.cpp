#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int f[1001][1001];
    memset(f, 0, sizeof(f)); // <-- Khởi tạo mảng

    int n = s.length();
    int maxLen = 1, start = 0;

    // Mỗi ký tự đơn lẻ là palindrome
    for(int i = 0; i < n; i++){
        f[i][i] = 1;
    }

    // Xét các độ dài từ 2 đến n
    for(int len = 2; len <= n; len++){
        for(int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            if(s[i] == s[j]){
                if(len == 2 || (len >= 3 && f[i+1][j-1])){
                    f[i][j] = 1;
                    if(len > maxLen){
                        maxLen = len;
                        start = i;
                    }
                }
            }
        }
    }

    return s.substr(start, maxLen);
}

int main()
{
    string s;
    cin >> s;
    cout << longestPalindrome(s);

    system("pause");
}
