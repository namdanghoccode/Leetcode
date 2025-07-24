#include <bits/stdc++.h>
using namespace std;

int Reverse(int x) {
    string s = to_string(x);
    bool isNegative = false;

    if(s[0] == '-'){
        isNegative = true;
        s = s.substr(1);
    }

    reverse(s.begin(), s.end());

    try
    {
        int num = stoi(s);
        if(isNegative){
            num = -num;
        }
        return num;
    }
    catch(...)
    {
        return 0;
    }
}

int main()
{
    int x; cin >> x;
    cout << Reverse(x) << endl;

    system("pause");
}
