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
//    int maxProfit(vector<int>& prices) {
//        int low = 0, high = 0, ans = 0;
//        for (int i = 0; i < prices.size() - 1; i++) {            
//                if (prices[i + 1] > prices[i]) {
//                    high = i + 1;
//                }
//                else if (prices[i + 1] == prices[i]) {
//                }
//                else {                  
//                    if (high > low)ans += prices[high] - prices[low];
//                    low = i + 1;
//                }                   
//        }
//        if (high > low)ans += prices[high] - prices[low];
//        return ans;
//    }
//    /*ִ����ʱ��4 ms, ������ C++ �ύ�л�����93.79 % ���û�
//        �ڴ����ģ�7.4 MB, ������ C++ �ύ�л�����24.67 % ���û�*/
//    int maxProfit2(vector<int>& prices) {
//        int ans = 0,size= prices.size();
//        vector<vector<int>> dp(size, vector<int>(2, 0));
//        dp[0][1] = -prices[0];
//        for (int i = 1; i < size ; i++) {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
//            /*for (int j = 0; j < size; j++) {
//                cout << dp[j][0] << " " << dp[j][1] << endl;
//            }
//            cout << endl;*/
//        }
//        return  max(dp[size - 1][1], dp[size - 1][0] );
//    }
//    //dp
//    //ִ����ʱ��16 ms, ������ C++ �ύ�л�����7.90% ���û�
//    //�ڴ����ģ�9.6 MB, ������ C++ �ύ�л�����5.01 % ���û�
//    //
//};
//
//int main() {
//    Solution b;
//    vector<int> a = { 1,2,3,4,5 };
//    b.maxProfit2(a);
//
//}