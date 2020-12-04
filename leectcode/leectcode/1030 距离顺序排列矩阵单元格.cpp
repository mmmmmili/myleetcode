//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
//		queue<vector<int>> q;
//		vector<vector<int>>ans;
//		vector<vector<int>> map(R, vector<int>(C, 0));
//		vector<int> temp;
//		int dir[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
//		q.push({ r0, c0 });
//		map[r0][c0] = 1;
//		while (!q.empty()) {
//			temp = q.front();
//			q.pop();
//			ans.push_back(temp);
//			for (int i = 0; i < 4; i++) {
//				int x = temp[0] + dir[i][0], y = temp[1] + dir[i][1];
//				if (x < R && x >= 0 && y < C && y >= 0 && map[x][y] == 0) {
//					q.push({ x, y });
//					map[x][y] = 1;
//				}
//			}
//		}
//		return ans;
//	}
//	/*执行用时：96 ms, 在所有 C++ 提交中击败了63.62 % 的用户
//		内存消耗：21.9 MB, 在所有 C++ 提交中击败了37.36 % 的用户*/
//};
//
//
//int main() {
//	Solution b;
//	b.allCellsDistOrder(2, 2, 0, 1);
//}