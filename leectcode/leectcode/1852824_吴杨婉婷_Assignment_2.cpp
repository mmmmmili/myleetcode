//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//
//class Solution {
//public:
//	/// <summary>
//	/// get how many times we need to transform m to n
//	/// </summary>
//	/// <param name="m">now state </param>
//	/// <param name="n">answer we want</param>
//	/// <returns></returns>
//	int getAnswer(string m, string n) {
//		int size = m.length();
//		vector<int> dp(size+1,0);
//		//dp[i]代表把前i个都搞好要多少（m[i-1])
//		for (int i = 1;i <= size;i++) {
//			if (m[i - 1] == n[i - 1]) {
//				dp[i] == dp[i - 1];
//			}
//			else {
//				int ans = n[i - 1] - m[i - 1];
//				if()
//			}
//				if((m[i-1]-n[i-1]+10)%10>3)
//			dp[i]=dp[i-1]
//		}
//	}
//	
//
//};
//int main() {
//	Solution b;
//	string m , n;
//	cout <<
//		"Please input the number and the absolute difference seperated by a space(eg:2 1): \n";
//	cin >> m >> n;
//	ofstream outfile;
//	outfile.open("a.txt");
//	b.getAnswer(m, n);
//	return 0;
//}