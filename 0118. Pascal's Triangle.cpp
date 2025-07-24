#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Generate(int numRows) {
    vector<vector<int>> triangle;
    for(int i = 0; i < numRows; i++){
        vector<int> row(i + 1, 1);
        for(int j = 1; j < i; j++){
            row[j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
        triangle.push_back(row);
    }
    return triangle;
}

int main()
{
    int numRows; cin >> numRows;
    vector<vector<int>> ans = Generate(numRows);
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
