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
//        //dp[i][j]�����i-j��ӡ��ɵ���С����
//        //��̬ת�Ʒ���
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
////ִ����ʱ��196 ms, ������ C++ �ύ�л�����6.27 % ���û�
////�ڴ����ģ�9.1 MB, ������ C++ �ύ�л�����72.41 % ���û�
//int main() {
//    Solution b;
//    b.strangePrinter("aaabbb");
//    return 0;
//}