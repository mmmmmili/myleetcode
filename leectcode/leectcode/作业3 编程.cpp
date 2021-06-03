//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//int compare(vector<int>& a, vector<int>& b) {
//    return a[0] < b[0];
//}
//class Solution {
//public:
//    int countNumbersWithUniqueDigits(int n) {
//        vector<int> dp(n + 1, 0);
//        for (int i = 2; i <= n; i++) {
//            dp[i] = (9 * pow(10, i - 2) - dp[i - 1]) * (i - 1) + dp[i - 1] * 10;
//        }
//        int num = 0;
//        for (int item:dp) {
//            num += item;
//        }
//        return pow(10, n) - num;
//    } 
//    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//        sort(intervals.begin(), intervals.end(), compare);
//        int size = intervals.size();
//        //dp[i] 表示以区间 i 为最后一个区间，可以选出的区间数量的最大值
//        vector<int> dp(size, 1);
//        for (int i = 1; i < size; i++) {
//            for (int j = i - 1; j >= 0; j--) {
//                if (intervals[i][0] >= intervals[j][1])dp[i] = max(dp[i], dp[j] + 1);
//            }     
//        }
//        return size-dp[size - 1];
//    }
//    float findWin(int n, float p,int i,int j) {
//        if (i > j) {
//            vector<vector<int>> dp(i+1, vector<int>(j+1, 1));
//            dp[0][0] = 1;
//            for (int k = 1; k <= i; k++)
//                dp[k][0] = dp[k - 1][0] * p;
//            for (int l = 1; l <= j; l++)
//                dp[0][l] = dp[0][l - 1] * (1 - p);
//            for (int k = 1; k <= i; k++) {
//                for (int l = 1; l <= j; l++) {
//                    dp[k][l] = dp[k - 1][l] * p + dp[k][l - 1] * (1 - p);
//                }
//            }
//            int ans = 0;
//            for (int l = 0; l <= j; l++)
//                ans += dp[i][l];
//            return ans;
//
//        }
//        
//    }
//    double WS(int i, int j, double p) {
//        double** prob = new double[i + 1][j + 1];
//        prob[0][0] = 1;
//        // Fill in probabilities for team A sweeping.
//        for (int Awin = 1; Awin <= i; Awin++)
//            prob[Awin][0] = p * prob[Awin - 1][0];
//        // Probabilities for team B sweeping
//        for (int Bwin = 1; Bwin <= j; Bwin++)
//            prob[0][Bwin] = (1 - p) * prob[0][Bwin - 1];
//        // Here's where we fill in the table, using the recursive
//        // formula.
//        for (int Awin = 1; Awin <= i; Awin++)
//            for (int Bwin = 1; Bwin <= j; Bwin++)
//                prob[Awin][Bwin] = p * prob[Awin - 1][Bwin] +
//                (1 - p) * prob[Awin][Bwin - 1];
//        // Here's our answer.
//        return prob[i][j];
//    }
//
//};
//
//
//
//int main() {
//    Solution b;
//    /*vector<vector<int>> a{ {1,2},{2,3},{3,4},{1,3} };
//
//    b.eraseOverlapIntervals(a);*/
//    findWin
//        return 0;
//}