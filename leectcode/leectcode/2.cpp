//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//
//class Solution {
//public :
//
//	/// <summary>
//	/// Return all non-negative integers of length such that the absolute difference between every two consecutive digits is k.
//	/// </summary>
//	/// <param name="n"></param>integers of length
//	/// <param name="k"></param>absolute difference
//	/// <returns></returns>
//	vector<int> getNumberInorder(int n,int k) {
//		vector<int> ans;
//		if (n < 2)return ans;		
//		for (int i = 1;i < 10;i++) {
//			getNextNum(ans, i, n-1, k);
//		}
//		return ans;
//
//	}
//
//	/// <summary>
//	/// get AnswerList
//	/// </summary>
//	/// <param name="ans"></param>answer list
//	/// <param name="temp"></param>temp number
//	/// <param name="n"></param>integers of length
//	/// <param name="k"></param>absolute difference
//	void getNextNum(vector<int>& ans,int temp, int n, int k) {
//		if (n == 0) {
//			ans.push_back(temp);
//			return;
//		}
//		int tail = temp % 10;
//		if (tail - k >= 0) {
//			temp = temp * 10 + tail - k;
//			getNextNum(ans, temp, n-1, k);
//			temp = temp / 10;
//		}		
//		if(k!=0&&tail+k<10) {
//			temp = temp * 10 + tail + k;
//			getNextNum(ans, temp, n -1, k);	
//		}
//
//	}
//	
//};
//int main() {
//	Solution b;
//	int n = 0, k = 0;
//	cout << 
//		"Please input the number and the absolute difference seperated by a space(eg:2 1): \n";
//	cin >> n >> k;	
//	ofstream outfile;
//	outfile.open("a.txt");
//
//
//	vector<int> ans = b.getNumberInorder(n, k);
//	int size = ans.size();
//
//	if (size != 0) {
//		outfile << ans[0]  ;
//		for (int i = 1;i < size;i++)
//			outfile << "," << ans[i];
//		cout << ans[0];
//		for (int i = 1;i < size;i++)
//			cout << "," << ans[i];
//	}
//	else {
//		cout << "NULL\n";
//	}
//	
//	return 0;
//}