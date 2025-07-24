#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int max_profit = 0;
    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        max_profit = max(max_profit, prices[i] - minPrice);
    }
    return max_profit;
}

int main()
{
    int n; cin >> n;
    vector<int> prices;
    for(int i = 0; i < n; i++) cin >> prices[i];
    cout << maxProfit(prices);

    system("pause");
}

