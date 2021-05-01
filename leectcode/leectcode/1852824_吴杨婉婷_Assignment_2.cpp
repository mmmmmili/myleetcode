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
//		//dp[i][j][k]��ʾ ǰi���Ѿ���ȫƥ�䣬��i+1���Ѿ�����j����i+2λ�Ѿ�����k
//		//dp[i+1]�����ǰi�������Ҫ���٣�s[i])
//		dp[0][0][0] = 0;
//		int add_num, sub_num;
//		for (int i = 0;i < size;i++) {
//			for (int j = 0;j < 10;j++) {
//				//��ʱs��0��i-1�Ѿ���ȫƥ��
//				//jΪs[i]���ﵱǰ״̬������ת�Ĵ���
//				add_num = (s2[i] - s1[i] - j + 20) % 10;
//				sub_num = (10 - add_num) % 10;
//				for (int k = 0;k < 10;k++) {
//					//mΪת��s[i+1]���Լӵ�ֵ
//					for (int m = 0; m <= add_num; m++)
//					{
//						//s[i]λ�����ú�s[i+1]λ�Ѿ��ӵ�ֵ
//						int t = (k + m) % 10;
//						//nΪs[i+2]λ���Լӵ�ֵ
//						for (int n = 0; n <= m; n++)
//							if (dp[i + 1][t][n] > dp[i][j][k] + add_num)
//								dp[i + 1][t][n] = dp[i][j][k] + add_num;
//					}
//					///mΪת��s[i+1]���Լ���ֵ
//					for (int m = 0; m <= sub_num; m++)
//					{
//						//s[i]λ�����ú�s[i+1]λ�Ѿ��ӵ�ֵ
//						int t = (k - m + 10) % 10;
//						//nΪs[i+2]λ���Լ���ֵ
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
//		//dp[i][j][k]��ʾ ǰi���Ѿ���ȫƥ�䣬��i+1���Ѿ�����j����i+2λ�Ѿ�����k
//		//dp[i+1]�����ǰi�������Ҫ���٣�s[i])		
//		int add_num, sub_num;
//		for (int i = 0;i < size;i++) {
//			for (int j = 0;j < 10;j++)
//				for (int k = 0;k < 10;k++)
//					dp[(i + 1) % 2][j][k] = 99999;
//
//			for (int j = 0;j < 10;j++) {
//				//��ʱs��0��i-1�Ѿ���ȫƥ��
//				//jΪs[i]���ﵱǰ״̬������ת�Ĵ���
//				add_num = (s2[i] - s1[i] - j + 20) % 10;
//				sub_num = (10 - add_num) % 10;
//				for (int k = 0;k < 10;k++) {
//					//mΪת��s[i+1]���Լӵ�ֵ
//					for (int m = 0; m <= add_num; m++)
//					{
//						//s[i]λ�����ú�s[i+1]λ�Ѿ��ӵ�ֵ
//						int t = (k + m) % 10;
//						//nΪs[i+2]λ���Լӵ�ֵ
//						for (int n = 0; n <= m; n++)
//							if (dp[(i + 1) % 2][t][n] > dp[i % 2][j][k] + add_num)
//								dp[(i + 1) % 2][t][n] = dp[i % 2][j][k] + add_num;
//					}
//					///mΪת��s[i+1]���Լ���ֵ
//					for (int m = 0; m <= sub_num; m++)
//					{
//						//s[i]λ�����ú�s[i+1]λ�Ѿ��ӵ�ֵ
//						int t = (k - m + 10) % 10;
//						//nΪs[i+2]λ���Լ���ֵ
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