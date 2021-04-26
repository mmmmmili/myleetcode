//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//class Solution {
//public:
//	void c(int n, int k) {
//		vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
//		for (int i = 0;i <= n;i++) {
//			for (int j = 0;j <= min(k, i);j++) {
//				if (j == 0 || j == i) {
//					dp[i][j] = 1;
//				}
//				else {
//					dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
//				}
//			}
//		}
//		for (int i = 0;i <= n;i++) {
//			for (int j = 0;j <= n;j++) {
//				cout << dp[i][j] << " ";
//			}
//			cout << "\n";
//		}
//	}
//};
//int main() {
//	Solution b;
//	b.c(5, 3);
//}
