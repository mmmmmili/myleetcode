//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	string sortString(string s) {
//		sort(s.begin(), s.end());
//		int size = s.size(), i = 0;
//		char ch = '\0';
//		bool isUp = true;
//		string ans = "";
//		while (true) {
//			if (isUp) {
//				if (ch != s[i]) {
//					ans.push_back(s[i]);
//					ch = s[i];
//					s.erase(s.begin() + i);
//
//				}
//				else { i++; }
//				size = s.size();
//				if (size == 0)break;
//				else if (i == size) {
//					isUp = false;
//					i = size - 1;
//					ch = '\0';
//				}
//			}
//			else {
//				if (ch != s[i]) {
//					ans.push_back(s[i]);
//					ch = s[i];
//					s.erase(s.begin() + i);
//				}
//				i--; //ע����һ�飬��isUP==true���ﲻһ��
//				size = s.size();
//				if (size == 0)break;
//				else if (i == -1) {
//					isUp = true;
//					i = 0;
//					ch = '\0';
//				}
//
//			}
//		}
//		return ans;
//	}/*ִ����ʱ��40 ms, ������ C++ �ύ�л�����18.92 % ���û�
//		�ڴ����ģ�7.8 MB, ������ C++ �ύ�л�����34.48 % ���û�*/
//	string sortString(string s) {
//		int nums[26] = {};
//		int size = s.size(), i = 0;
//		for (; i < size; i++) {
//			nums[s[i] - 'a']++;
//		}
//	
//		string ans = "";
//		bool flag = true;
//		while (flag) {
//			i = 0;
//			flag = false;
//			while (true) {
//				if (nums[i]) {
//					ans += 'a' + i;
//					nums[i]--;
//					flag = true;
//				}
//				i++;
//				if (i == 26)break;
//			}
//			i = 25;
//			while (true) {
//				if (nums[i]) {
//					ans += 'a' + i;
//					nums[i]--;
//					flag = true;
//				}
//				i--;
//				if (i == -1)break;
//			}
//		}
//		return ans;
//	}/*ִ����ʱ��8 ms, ������ C++ �ύ�л�����81.38 % ���û�
//		�ڴ����ģ�7.8 MB, ������ C++ �ύ�л�����35.20 % ���û�*/
//};
//
//
//int main() {
//	Solution b;
//	b.sortString("aaaabbbbcccc"
//	);
//}