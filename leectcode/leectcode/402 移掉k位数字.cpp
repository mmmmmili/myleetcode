//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string removeKdigits1(string num, int k) {
//		int size = num.size();
//		vector<vector<string>> dp(size, vector<string>(k + 1, "9999"));
//		//dp[i][j]是前i下标个取走k个之后的数字，要求最小的
//		//dp[i][j]=min(trans(dp[i-1][j-1],i-j,size-j),dp[i-1][j])
//		for (int i = 0; i < size; i++) {
//			dp[i][0] = num;
//			for (int m = 0; i < size; i++) {
//				for (int n = 0; n < k + 1; n++) {
//					cout << dp[m][n] << " ";
//				}
//				cout << endl;
//			}
//			cout << endl;
//		}
//		dp[0][1] = trans(num, 0, 1, size);
//		for (int i = 1; i < size; i++) {
//			for (int j = 1; j < k + 1; j++) {
//				string t1 = trans(dp[i - 1][j - 1], i, j, size), t2 = dp[i - 1][j];
//				if (t1 != "9999" && t2 != "9999") {
//					dp[i][j] = min(t1, t2);
//				}
//				else if (t1 != "9999" && t2 == "9999") {
//					dp[i][j] = t1;
//				}
//				else if (t1 == "9999" && t2 != "9999") {
//					dp[i][j] = t2;
//				}
//
//
//				for (int m = 0; m < size; m++) {
//					for (int n = 0; n < k + 1; n++) {
//						cout << dp[m][n] << " ";
//					}
//					cout << endl;
//				}
//				cout << endl;
//			}
//		}
//		string temp = to_string(INT16_MAX);
//		for (int i = k; i < size; i++) {
//			if (dp[i][k] != "9999")
//				temp = min(temp, dp[i][k]);
//		}
//
//		return temp;
//	}
//	string trans(string num, int i, int j, int size) {
//		//12345678  num=123478 想要取走7 size=8 i=6 j=3 7的实际下表是4 index=4, tempSize=6
//		if (num == "-1" || i - j + 1 < 0)return num;
//		string ans = num;
//		ans.erase(i - j + 1, 1);
//		return ans;
//	}
//	string removeKdigits(string num, int k) {
//		int size = num.size(), i = 0;
//		if (size == 0)return "0";
//		vector<char> temp(size);
//		int top = -1;
//
//		char pre;
//		temp[++top] = num[i++];
//		while (i < size) {
//			while (k > 0 && top != -1) {
//				pre = temp[top];
//				if (pre > num[i]) {
//					--top;
//					--k;
//				}
//				else {
//					temp[++top] = num[i++];
//					break;
//				}
//
//			}
//			if (k <= 0 || top == -1) {
//				temp[++top] = num[i++];
//			}
//		}
//		while (k > 0) {
//			--top;
//			--k;
//		}
//		string a = "";
//		i = 0;
//		if (top == -1)return "0";
//		while (i <= top && temp[i] == '0') {
//			++i;
//		}
//		for (; i <= top; i++) {
//			a += temp[i];
//		}
//		return a == "" ? "0" : a;
//
//
//	}
//	/* 执行用时：4 ms, 在所有 C++ 提交中击败了91.31 % 的用户
//		 内存消耗：7.2 MB, 在所有 C++ 提交中击败了38.55 % 的用户*/
//		 //天哪有太多小细节需要处理，实在是太难了！！！！！！
//
//
//
//
//
//	string removeKdigits(string num, int k) {
//		int size = num.size(), i = 0;
//		if (size == 0)return "0";
//		vector<char> temp(size);
//		int top = -1;
//
//		temp[++top] = num[i++];
//		while (i < size) {
//			while (k > 0 && top != -1 && temp[top] > num[i]) {
//				--top;
//				--k;
//
//			}
//
//			temp[++top] = num[i++];
//
//		}
//		while (k > 0) {
//			--top;
//			--k;
//		}
//		string a = "";
//		i = 0;
//		if (top == -1)return "0";
//		while (i <= top && temp[i] == '0') {
//			++i;
//		}
//		for (; i <= top; i++) {
//			a += temp[i];
//		}
//		return a == "" ? "0" : a;
//	}
//	//执行用时：8 ms, 在所有 C++ 提交中击败了55.72% 的用户
//	//内存消耗：7.1 MB, 在所有 C++ 提交中击败了61.34 % 的用户
//	//微小改动版本
//
//
//		/*
//	贪心:让高位尽可能小 从高位向低位遍历 若高位可被更小的代替 则直接代替 但最多只能代替k次
//		 故前几位会形成一个递增序列 可利用单调栈 最多弹出k次
//	*/
//	string removeKdigits(string num, int k) {
//		vector<int> stk(num.size());//单调递增栈
//		int top = -1;//栈顶
//		if (num.size() == k) return "0";
//		string ans;
//		for (int i = 0; i < num.size(); i++) {
//			while (top != -1 && stk[top] > num[i] && k) top--, k--;//高位可换成更小的时，则去替换高位值，最多k次
//			stk[++top] = num[i];
//		}
//		while (k--) top--;//若还没删够，则删除末尾的k个数
//		int i = 0;
//		while (stk[i] == '0' && i < top) i++;//去除前导零
//		while (i <= top) ans.push_back(stk[i++]);
//		return ans;
//	}
//
//	//执行用时：4 ms, 在所有 C++ 提交中击败了91.31 % 的用户
//		//内存消耗：7.5 MB, 在所有 C++ 提交中击败了18.03 % 的用户
//	//非官方题解
//	
//};
//
//
//
//int main() {
//	Solution b;
//	b.removeKdigits("0", 0);
//}