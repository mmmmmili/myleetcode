//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//		
//		int i = 0, size = intervals.size(),flag=0 ;
//		
//		while (i < size) {
//			if (intervals[i][1] < newInterval[0] && (i+1<size&& intervals[i+1][0] > newInterval[1]||i+1==size)) {
//				intervals.insert(intervals.begin() + i+1, { newInterval[0],newInterval[1] });			
//				flag = 1;
//				break;
//			}
//			else if (intervals[i][1] >= newInterval[0] && intervals[i][0] <= newInterval[1]) {
//				int k = i;
//				int temp[2] = { min(newInterval[0],intervals[i][0]),max(newInterval[1],intervals[i][1]) };
//				while (i+1< size &&intervals[i + 1][1] >= newInterval[0] && intervals[i + 1][0] <= newInterval[1]) {
//					i++;
//					temp[1] = max(temp[1], intervals[i][1]);
//				}
//				intervals[i][0] = temp[0];
//				intervals[i][1] = temp[1];
//				intervals.erase(intervals.begin() + k, intervals.begin() + i);
//				flag = 1;
//				break;
//			}
//			else {
//				i++;
//			}
//		}
//		if (size == 0 || (flag == 0 && intervals[0][0] > newInterval[1]))intervals.insert(intervals.begin(), { newInterval[0],newInterval[1] });
//		return intervals;
//	}
//
//	//主要是没有考虑边界情况
//	//执行用时：36 ms, 在所有 C++ 提交中击败了40.31% 的用户
//	//内存消耗：17.3 MB, 在所有 C++ 提交中击败了6.86 % 的用户
//};
//
//
//int main() {
//	Solution b;
//	/*vector<vector<int>> intervals = { {1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16} };
//		
//	; vector<int> newInterval = { 4,8 };*/
//	/*vector<vector<int>> intervals = { {1, 3}, {6, 9} };
//
//	; vector<int> newInterval = { 2,5 };*/
//	vector<vector<int>> intervals = { {1, 5}};
//
//	; vector<int> newInterval = { 6,8};
//	b.insert(intervals, newInterval);
//}