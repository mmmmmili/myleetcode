//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//   /* int minimumOperations(string leaves) {
//        int sides = 0, midNo = 0, low = 0, high = leaves.size() - 1;
//        if (leaves[0] == 'y')sides++;
//        if (leaves[leaves.size() - 1] == 'y')sides++;
//        while (leaves[low] != 'y' && leaves[high] != 'y') {
//            if (leaves[low] != 'y')low++;
//            if (leaves[high] != 'y')high--;
//        }
//        for (int i = low + 1; i < high ; i++) {
//            if (leaves[i] == 'r')midNo++;
//        }
//
//        return midNo + sides;
//    }*/
//    //失败，得用动态规划
//    int minimumOperations(string leaves) {
//        int n = leaves.size();
//        vector<vector<int>> dp(3, vector<int>(n, 0));
//        dp[0][0] = dp[1][0] = dp[2][0] = (int)(leaves[0] == 'y');
//        if (leaves[1] == 'r')dp[2][1] = min(dp[1][0] + 1, dp[0][0] + 1);////这一步非常重要
//        for (int i = 1; i < n; i++) {
//            if (leaves[i] == 'r') {
//                dp[0][i] = dp[0][i - 1];
//                dp[1][i] = min(dp[1][i - 1] + 1, dp[0][i - 1] + 1);
//                if (i > 1)dp[2][i] = min(dp[2][i - 1], dp[1][i - 1]);
//            }
//            else {
//                dp[0][i] = dp[0][i - 1] + 1;
//                dp[1][i] = min(dp[1][i - 1], dp[0][i - 1]);
//                dp[2][i] = min(dp[2][i - 1] + 1, dp[1][i - 1] + 1);
//            }
//        }
//        return dp[2].back();
//    }
//   /* 执行用时：116 ms, 在所有 C++ 提交中击败了97.61 % 的用户
//        内存消耗：38.8 MB, 在所有 C++ 提交中击败了50.89 % 的用户*/
//};
//int main() {
//    Solution b;
//    b.minimumOperations("yry");
//}