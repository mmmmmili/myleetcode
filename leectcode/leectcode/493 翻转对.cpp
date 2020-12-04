//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	/*int reversePairs(vector<int>& nums) {
//		unordered_map<int, int> hash;
//		int size = nums.size(), ans = 0;
//
//		for (int i = 0; i < size; i++) {
//			for (int j = i + 1; j < size; j++) {
//				if ((long)nums[i] > 2 * (long)nums[j]) {
//					ans++;
//				}
//			}
//		}
//		return ans;
//
//	}*/
//	//超时是必须的
//	//或许归并排序可以搞定
//
//	int reversePairs(vector<int>& nums) {
//		int cnt = 0;
//		mergeSort(nums, 0, nums.size(), cnt);
//		return cnt;
//		
//
//	}
//	vector<int> mergeSort(const vector<int>& temp, int start, int end, int& ans) {
//		if (start + 1 == end) {
//			return { temp[start] };
//		}
//		else if (start + 2 == end) {
//			if ((long)temp[start] > 2 * (long)temp[start + 1]) {
//				ans++;
//				return { temp[start + 1] ,temp[start] };
//			}
//			return { temp[start] ,temp[start + 1] };
//		}
//		else {
//			int mid = (start + end) / 2;
//			return merge(mergeSort(temp, start, mid, ans), mergeSort(temp, mid, end, ans),ans);
//		}
//	}
//	vector<int> merge(vector<int> a, vector<int> b, int& ans) {
//		int size1 = a.size(), size2 = b.size();
//		int i = 0, j = 0;
//		vector<int> vec;
//		while (i < size1 && j < size2) {
//			if ((long)a[i] > 2 * (long)b[j]) {
//				vec.push_back(b[j]);
//				j++;
//				ans += size1 - i;
//			}
//			else {
//				vec.push_back(a[i]);
//				i++;
//			}
//		}
//		
//
//
//		while (j != size2) {
//			vec.push_back(b[j]);
//			j++;
//		}
//		while (i != size1) {
//			vec.push_back(a[i]);
//			i++;
//		}
//		return vec;
//	}
//};
//
//
//int main() {
//	Solution b;
//	vector<int> j = { 1,3,2,3,1 };
//	b.reversePairs(j);
//
//}