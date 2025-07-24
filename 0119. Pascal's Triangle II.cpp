#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> rows(rowIndex + 1);
    rows[0] = 1;
    for(int i = 1; i <= rowIndex; i++){
        for(int j = i; j > 0; j--){
            rows[j] += rows[j-1];
        }
    }
    return rows;
}

int main()
{
    int rowIndex; cin >> rowIndex;
    vector<int> ans = getRow(rowIndex);

    system("pause");
}
