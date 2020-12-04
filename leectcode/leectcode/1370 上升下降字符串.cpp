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
//				i--; //注意这一块，和isUP==true那里不一样
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
//	}/*执行用时：40 ms, 在所有 C++ 提交中击败了18.92 % 的用户
//		内存消耗：7.8 MB, 在所有 C++ 提交中击败了34.48 % 的用户*/
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
//	}/*执行用时：8 ms, 在所有 C++ 提交中击败了81.38 % 的用户
//		内存消耗：7.8 MB, 在所有 C++ 提交中击败了35.20 % 的用户*/
//};
//
//
//int main() {
//	Solution b;
//	b.sortString("aaaabbbbcccc"
//	);
//}