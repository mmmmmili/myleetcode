//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
////402
//class Solution {
//public:
//
//
//	vector<int> removeKdigits(vector<int>& num, int k) {
//		vector<int> stk(num.size());//��������ջ
//		int top = -1;//ջ��
//		if (num.size() == k) return {};
//		string ans;
//		for (int i = 0; i < num.size(); i++) {
//			while (top != -1 && stk[top] < num[i] && k) top--, k--;//��λ�ɻ��ɸ����ʱ����ȥ�滻��λֵ�����k��
//			stk[++top] = num[i];
//		}
//		while (k--) top--;//����ûɾ������ɾ��ĩβ��k����
//		return vector<int>(stk.begin(), stk.begin()+top+1);
//	}
//	vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
//		vector<int> tempvecotr,ans(k,0);
//		int size1 = nums1.size(), size2 = nums2.size();
//		if (size1 + size2 == k) {
//			return merge(nums1, nums2);
//		}
//		else if (k == 0) {
//			return {};
//		}
//		else {
//			
//			for (int i = 0; i <= k; i++) {
//
//				if (size1 >= i && size2 >= k - i) {
//					
//					tempvecotr = merge(removeKdigits(nums1, size1 - i), removeKdigits(nums2, size2 - k + i));
//					bool isGreater=true;
//					for (int i = 0; i < k; i++) {
//						if (tempvecotr[i]>ans[i]) {
//							
//							break;
//						}
//						else if (tempvecotr[i] < ans[i]) {
//							isGreater = false;
//							break;
//						}
//						else {
//							continue;
//						}
//					}if (isGreater)ans = tempvecotr;
//					
//				}
//			}
//		}
//		return ans;
//	}
//    vector<int> merge(const vector<int>& nums1, const vector<int>& nums2) {
//		vector<int> ans;
//		int size1 = nums1.size(), size2 = nums2.size();
//		int i = 0, j = 0;
//		while (i < size1 && j < size2) {
//			if (compare(nums1,i,nums2,j)>0) {
//				ans.push_back(nums1[i++]);
//			}
//			else {
//				ans.push_back(nums2[j++]);
//			}
//		}
//		while(i < size1) {
//			ans.push_back(nums1[i++]);
//		}
//		while (j < size2) {
//			ans.push_back(nums2[j++]);
//		}
//		
//		return ans;
//    }
//	int compare(const vector<int>& a, int index1, const vector<int>& b, int index2) {
//		int x = a.size(), y = b.size();
//		while (index1 < x && index2 < y) {
//			int difference = a[index1] - b[index2];
//			if (difference != 0) {
//				return difference;
//			}
//			index1++;
//			index2++;
//		}
//		return (x - index1) - (y - index2);
//
//		
//	}
//	/*ִ����ʱ��68 ms, ������ C++ �ύ�л�����91.58 % ���û�
//		�ڴ����ģ�26.2 MB, ������ C++ �ύ�л�����66.79 % ���û�*/
//};
//
//
//int main() {
//	Solution b;
//	vector<int> h = { 3, 4, 6, 5 }, a = { 9, 1, 2, 5, 8, 3 };
//
//	a=b.maxNumber(h, a,5);
//}