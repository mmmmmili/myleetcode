#include<iostream>
#include<stack>
#include <algorithm>
#include<math.h>
#include<vector>
using namespace std;



class Solution {
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        //  vector<vector<int>> dp(m+1，vector<int>(target+1,0));
        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(target + 1, vector<int>(n, 9999)));
        for (int j = 0; j <= target; j++) {
            for (int k = 0; k < n; k++) {
                dp[0][j][k] = 0;
            }
        }
       
        // int dp[m+1][target+1][n];
         //dp[i][j][k]是将前i个（下标为i-1)分为j,并且houses[i-1]的颜色为k
         //颜色从1开始，但是k从0开始
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= i && j <= target; j++) {
                for (int k = 0; k < n; k++) {
                    int temp = houses[i - 1] - 1 == k ? 0 : cost[i - 1][k];
                    dp[i][j][k]= dp[i - 1][j][k] + temp;
                    for (int z = 0; z < n; z++) {
                        if (k != z) {
                            dp[i][j][k] = min(dp[i - 1][j - 1][z] + temp, dp[i][j][k]);
                        }
                    }
                }
            }
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            ans = min(ans, dp[m][target][i]);
        }
        return ans;

    }
};
int main() {
    Solution b;
    vector<int>temp1 = { 0, 2, 1, 2, 0 };
    vector<vector<int>> temp2 = { {1, 10}, {10, 1}, {10, 1}, {1, 10}, {5, 1} };
    b.minCost(temp1, temp2, 5, 2, 3);
    return 0;
}