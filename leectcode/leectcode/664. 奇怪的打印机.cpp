//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int strangePrinter(string s) {
//        int size = s.size();
//        vector<vector<int>> dp(size, vector<int>(size, 9999));
//        //dp[i][j]是完成i-j打印完成的最小次数
//        //动态转移方程
//        //if(s[i]==s[j])dp[i][j]=dp[i][j-1];
//        for (int i = size - 1; i >= 0; i--) {
//            dp[i][i] = 1;
//            for (int j = i + 1; j < size; j++) {
//                if (s[i] == s[j])dp[i][j] = dp[i][j - 1];
//                else {
//                    for (int k = i; k < j; k++) {
//                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j]);
//                    }
//                }
//            }
//        }
//
//        return dp[0][size - 1];
//    }
//};
//
////执行用时：196 ms, 在所有 C++ 提交中击败了6.27 % 的用户
////内存消耗：9.1 MB, 在所有 C++ 提交中击败了72.41 % 的用户
//int main() {
//    Solution b;
//    b.strangePrinter("aaabbb");
//    return 0;
//}