//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    //int longestCommonSubsequence(string text1, string text2) {
//
//    //    ////从test[i]-test[j] 有几个一样的
//    //    int size1 = text1.size(), size2 = text2.size();
//    //    vector<vector<int> >dp(size1, vector<int>(size2, 0));
//    //    if (text1[0] == text2[0])dp[0][0] = 1;
//    //    for (int i = 1; i < size2; i++) {
//    //        if (text1[0] == text2[i])dp[0][i] = max(dp[0][i - 1], 1);
//    //        else {
//    //            dp[0][i] = dp[0][i - 1];
//    //        }
//
//    //    }for (int j = 1; j < size1; j++) {
//    //        if (text2[0] == text1[j])dp[j][0] = max(dp[j - 1][0], 1);
//    //        else {
//    //            dp[j][0] = dp[j - 1][0];
//    //        }
//    //    }
//
//    //    for (int i = 1; i < size1; i++) {
//    //        for (int j = 1; j < size2; j++) {
//    //            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//    //            if (text1[i] == text2[j]) {
//    //                dp[i][j] = max(dp[i - 1][j - 1] + 1, dp[i][j]);
//    //            }
//    //            else {
//    //                dp[i][j] = max(dp[i - 1][j - 1], dp[i][j]);
//    //            }
//    //        }
//    //    }
//    //    return dp[size1 - 1][size2 - 1];
//
//
//    //}
//    
//    //这是以前写的
//
//    int longestCommonSubsequence(string text1, string text2) {
//        int[][]dp;
//        //dp[i][j]表示text1[i-1]text[j-1]中有多少个一致的
//        int size1 = text1.size(), size2 = text2.size();
//        for (int i = 1; i <= size1; i++) {
//            for (int j = 1; j <= size2; j++) {
//                if (text1[i - 1] == text2[j - 1])dp[i][j] = dp[i - 1][j - 1] + 1;
//                else if()
//            }
//        }
//    
//    
//    }
//};
//
//int main() {
//    Solution b;
//
//}