//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int numDecodings(string s) {
//        int n = s.size();
//        vector<int> dp(n + 1);
//        dp[0] = 1;
//        //dp[i]是指前i个
//        if (n > 1) {
//            if (s[0] != '0')dp[1] = 1;
//            else return 0;
//        }
//
//        for (int i = 1;i < n;i++) {
//            if (s[i] != '0') {
//                //dp[i] += dp[i - 1];
//                dp[i+1] += dp[i];
//            }
//            if (i>1&& s[i - 1] != '0'&&(s[i - 1] - '0') * 10 + s[i] - '0' < 27) {
//                //dp[i] += dp[i - 2];
//                dp[i+1] += dp[i - 1];
//            }
//
//        }
//        return dp[n];
//        
//    }
//};
//int main() {
//	Solution b;
//    b.numDecodings("12");
//    return 0;
//}