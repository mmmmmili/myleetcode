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
//		//dp[i][j]��ǰi�±��ȡ��k��֮������֣�Ҫ����С��
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
//		//12345678  num=123478 ��Ҫȡ��7 size=8 i=6 j=3 7��ʵ���±���4 index=4, tempSize=6
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
//	/* ִ����ʱ��4 ms, ������ C++ �ύ�л�����91.31 % ���û�
//		 �ڴ����ģ�7.2 MB, ������ C++ �ύ�л�����38.55 % ���û�*/
//		 //������̫��Сϸ����Ҫ����ʵ����̫���ˣ�����������
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
//	//ִ����ʱ��8 ms, ������ C++ �ύ�л�����55.72% ���û�
//	//�ڴ����ģ�7.1 MB, ������ C++ �ύ�л�����61.34 % ���û�
//	//΢С�Ķ��汾
//
//
//		/*
//	̰��:�ø�λ������С �Ӹ�λ���λ���� ����λ�ɱ���С�Ĵ��� ��ֱ�Ӵ��� �����ֻ�ܴ���k��
//		 ��ǰ��λ���γ�һ���������� �����õ���ջ ��൯��k��
//	*/
//	string removeKdigits(string num, int k) {
//		vector<int> stk(num.size());//��������ջ
//		int top = -1;//ջ��
//		if (num.size() == k) return "0";
//		string ans;
//		for (int i = 0; i < num.size(); i++) {
//			while (top != -1 && stk[top] > num[i] && k) top--, k--;//��λ�ɻ��ɸ�С��ʱ����ȥ�滻��λֵ�����k��
//			stk[++top] = num[i];
//		}
//		while (k--) top--;//����ûɾ������ɾ��ĩβ��k����
//		int i = 0;
//		while (stk[i] == '0' && i < top) i++;//ȥ��ǰ����
//		while (i <= top) ans.push_back(stk[i++]);
//		return ans;
//	}
//
//	//ִ����ʱ��4 ms, ������ C++ �ύ�л�����91.31 % ���û�
//		//�ڴ����ģ�7.5 MB, ������ C++ �ύ�л�����18.03 % ���û�
//	//�ǹٷ����
//	
//};
//
//
//
//int main() {
//	Solution b;
//	b.removeKdigits("0", 0);
//}