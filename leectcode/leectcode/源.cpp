////#include<iostream>
////#include<vector>
////#include<string>
////using namespace std;
////class Solution {
////public:
////    int longestCommonSubsequence(string text1, string text2) {
////
////        ////从test[i]-test[j] 有几个一样的
////        int size1 = text1.size(), size2 = text2.size();
////        vector<vector<int> >dp(size1, vector<int>(size2, 0));
////        if (text1[0] == text2[0])dp[0][0] = 1;
////        for (int i = 1;i < size2;i++) {
////            if (text1[0] == text2[i])dp[0][i] = max(dp[0][i - 1], 1);
////            else {
////                dp[0][i] = dp[0][i - 1];
////            }
////
////        }for (int j = 1;j < size1;j++) {
////            if (text2[0] == text1[j])dp[j][0] = max(dp[j - 1][0], 1);
////            else {
////                dp[j][0] = dp[j - 1][0];
////            }
////        }
////
////        for (int i = 1;i < size1;i++) {
////            for (int j = 1;j < size2;j++) {
////                if (text1[i] == text2[j]) {
////                    dp[i][j] = max(dp[i - 1][j - 1] + 1, dp[i][j - 1]);
////                }
////                else {
////                    dp[i][j] = max(dp[i - 1][j - 1], dp[i-1][j ]);
////                }
////            }
////        }
////        return dp[size1 - 1][size2 - 1];
////
////
////    }
////};
////int main() {
////    Solution b;
////    b.longestCommonSubsequence("abcde", "ace");
////}
//
//
//int binarySearchRui(vector<int>& s, int target) {
//    return binarySearchRui(s, target, 0, s.size());
//}
//int binarySearchRui(vector<int>& s,
//    int target, int low, int high) {
//    if (low >= high)return low - 1;
//    int middle = (low + high) / 2;
//    if (s[middle] >= target) {
//        return 
//            binarySearchRui(s, target, middle + 1, high);
//    }
//    else {
//        return 
//            binarySearchRui(s, target, low, middle);
//    }
//}
//
////如果是多个则返回最后出现的下标，
////如果没出现则返回不小于target的最小数下标
//int binarySearchNoneRui(vector<int>& s, int target) {
//    int low = 0, high = s.size(), middle = 0;
//    while (low < high) {
//        middle = (low + high) / 2;
//        if (s[middle] >= target)
//            low = middle + 1;
//        else
//            high = middle;
//    }
//    return low - 1;
//
//}