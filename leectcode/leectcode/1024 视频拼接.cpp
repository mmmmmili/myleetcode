//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//    
//    int videoStitching(vector<vector<int>>& clips, int T) {
//        int size = clips.size();
//        int** dp = new int* [size];
//        for (int i = 0; i < size; i++) {
//            dp[i] = new int[T + 1];
//            for (int j = 0; j < T + 1; j++)
//                dp[i][j] = 0;
//        }
//        
//        int temp = 0;
//       /* for (int i = 0; i < size; i++)
//            temp = max(clips[i][1], temp);
//        if (temp < T)return -1;*/
//
//        //当上面这一段处于注释状态的时候
//        //执行用时：4 ms, 在所有 C++ 提交中击败了93.09% 的用户
//        //内存消耗：8.3 MB, 在所有 C++ 提交中击败了11.20 % 的用户
//
//        int tempmax = 0;
//        while (true) {
//            temp = tempmax;
//            tempmax = 0;
//            int flag = 0;
//            for (int i = 0; i < size; i++) {
//                if (clips[i][0] <= temp ) {
//                    
//                    //dp[i][clips[i][1]] = 1;
//                    int temp2 = 0;
//                    for (int k = 0; k < size && temp >= 0; k++) {
//                        temp2 = max(temp2, dp[k][temp]);
//                    }
//                    for (int j = temp+1; j <= clips[i][1]&&j<=T; j++) {
//                        dp[i][j] = temp2 + 1;
//                        flag = 1;
//                    }
//                    tempmax = max(tempmax, clips[i][1]);
//                }
//            }
//           
//            int max1 = 0;
//            for (int i = 0; i < size; i++) {
//
//                if (dp[i][T] != 0) {
//                    max1 = max(dp[i][T], max1);
//                }
//            }
//
//           /* for (int i = 0; i < size; i++) {
//                for (int j = 0; j < T + 1; j++) {
//                    cout << dp[i][j] << " ";
//               }
//                cout << endl;
//            }*/
//            //这个是方便调试用的测试代码
//
//
//            if (max1 != 0)return max1;
//            if (flag == 0)return -1;
//        }
//    }
//    /*执行用时：8 ms, 在所有 C++ 提交中击败了49.24 % 的用户
//        内存消耗：8.4 MB, 在所有 C++ 提交中击败了11.20 % 的用户*/
//
//    int videoStitching2(vector<vector<int>>& clips, int T) {
//        int size = clips.size();
//        int* dp = new int[T + 1];
//
//        for (int j = 0; j < T + 1; j++)
//            dp[j] = INT_MAX-1;
//
//        
//        dp[0] = 0;
//
//        for (int i = 1; i <= T; i++) {
//            for (auto& t : clips) {
//                if (i <= t[1] && i > t[0]) {
//                    dp[i] = min(dp[i], 1 + dp[t[0]]);
//                }
//            }
//        }
//        if (dp[T] == INT_MAX-1)return -1;
//        return dp[T];
//    }
//   /* 官方的动态规划
//    执行用时：4 ms, 在所有 C++ 提交中击败了93.09 % 的用户
//        内存消耗：8 MB, 在所有 C++ 提交中击败了15.47 % 的用户*/
//};
//
//
//
//int main() {
//    Solution b;
//    vector<vector<int>> a = { {0,5},{6,8}  };
//    b.videoStitching2(a, 7);
//
//    
//    /*vector<vector<int>> a = { {0,2 }, {4,6} ,{8,10},{1,9},{1,5},{5,9} };
//    b.videoStitching2(a, 10);*/
//}