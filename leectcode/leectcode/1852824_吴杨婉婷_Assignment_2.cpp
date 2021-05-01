//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<cmath>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	/// <summary>
//	/// get how many times we need to transform m to n
//	/// </summary>
//	/// <param name="s1">now state </param>
//	/// <param name="s2">answer we want</param>
//	/// <returns></returns>
//	int getAnswer(string s1, string s2) {
//		int size = s1.length();
//		vector<vector<vector<int>>> dp(size + 1, vector<vector<int>>(10, vector<int>(10, 99999)));
//		//dp[i][j][k]表示 前i个已经完全匹配，第i+1个已经加了j，第i+2位已经加了k
//		//dp[i+1]代表把前i个都搞好要多少（s[i])
//		dp[0][0][0] = 0;
//		int add_num, sub_num;
//		for (int i = 0;i < size;i++) {
//			for (int j = 0;j < 10;j++) {
//				//此时s从0到i-1已经完全匹配
//				//j为s[i]到达当前状态做的旋转的次数
//				add_num = (s2[i] - s1[i] - j + 20) % 10;
//				sub_num = (10 - add_num) % 10;
//				for (int k = 0;k < 10;k++) {
//					//m为转动s[i+1]可以加的值
//					for (int m = 0; m <= add_num; m++)
//					{
//						//s[i]位调整好后s[i+1]位已经加的值
//						int t = (k + m) % 10;
//						//n为s[i+2]位可以加的值
//						for (int n = 0; n <= m; n++)
//							if (dp[i + 1][t][n] > dp[i][j][k] + add_num)
//								dp[i + 1][t][n] = dp[i][j][k] + add_num;
//					}
//					///m为转动s[i+1]可以减的值
//					for (int m = 0; m <= sub_num; m++)
//					{
//						//s[i]位调整好后s[i+1]位已经加的值
//						int t = (k - m + 10) % 10;
//						//n为s[i+2]位可以减的值
//						for (int n = 0; n <= m; n++)
//							if (dp[i + 1][t][(10 - n) % 10] > dp[i][j][k] + sub_num)
//								dp[i + 1][t][(10 - n) % 10] = dp[i][j][k] + sub_num;
//
//					}
//
//				}
//			}
//		}
//		return dp[size][0][0];
//	}
//	int getAnswer2(string s1, string s2) {
//		int size = s1.length();
//		
//		int dp[2][10][10] = {};
//		for (int j = 0;j < 10;j++)
//			for (int k = 0;k < 10;k++)
//				dp[0][j][k] = 99999;
//		dp[0][0][0] = 0;
//		//dp[i][j][k]表示 前i个已经完全匹配，第i+1个已经加了j，第i+2位已经加了k
//		//dp[i+1]代表把前i个都搞好要多少（s[i])		
//		int add_num, sub_num;
//		for (int i = 0;i < size;i++) {
//			for (int j = 0;j < 10;j++)
//				for (int k = 0;k < 10;k++)
//					dp[(i + 1) % 2][j][k] = 99999;
//
//			for (int j = 0;j < 10;j++) {
//				//此时s从0到i-1已经完全匹配
//				//j为s[i]到达当前状态做的旋转的次数
//				add_num = (s2[i] - s1[i] - j + 20) % 10;
//				sub_num = (10 - add_num) % 10;
//				for (int k = 0;k < 10;k++) {
//					//m为转动s[i+1]可以加的值
//					for (int m = 0; m <= add_num; m++)
//					{
//						//s[i]位调整好后s[i+1]位已经加的值
//						int t = (k + m) % 10;
//						//n为s[i+2]位可以加的值
//						for (int n = 0; n <= m; n++)
//							if (dp[(i + 1) % 2][t][n] > dp[i % 2][j][k] + add_num)
//								dp[(i + 1) % 2][t][n] = dp[i % 2][j][k] + add_num;
//					}
//					///m为转动s[i+1]可以减的值
//					for (int m = 0; m <= sub_num; m++)
//					{
//						//s[i]位调整好后s[i+1]位已经加的值
//						int t = (k - m + 10) % 10;
//						//n为s[i+2]位可以减的值
//						for (int n = 0; n <= m; n++)
//							if (dp[(i + 1) % 2][t][(10 - n) % 10] > dp[i % 2][j][k] + sub_num)
//								dp[(i + 1) % 2][t][(10 - n) % 10] = dp[i % 2][j][k] + sub_num;
//
//
//					}
//
//				}
//			}
//		}
//		return dp[size % 2][0][0];
//	}
//
//
//};
//int main() {
//	Solution b;
//	string m, n;
//	cout <<
//		"Please input the origin number and the number we wanted seperated by a space(eg:2 1): \n";
//	while (cin >> m >> n) {
//		//ofstream outfile;
//		//outfile.open("a.txt");
//		cout << b.getAnswer2(m, n) << endl;
//	}return 0;
//}