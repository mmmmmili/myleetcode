//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int islandPerimeter(vector<vector<int>>& grid) {
//        int length = 0;
//        int dir[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
//        int m = grid.size();
//        if (m == 0)return length;
//            int n = grid[0].size();
//            if (n == 0)return length;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (grid[i][j] == 1) {
//                    for (int k = 0; k < 4; k++) {
//                        if ((i + dir[k][0]) < 0 || i + dir[k][0] == m || j + dir[k][1] < 0 || j + dir[k][1] == n)
//                            length += 1;
//                        else if(grid[i + dir[k][0]][j + dir[k][1]]==0)
//                            length += 1;
//                    }
//                }
//            }
//        }
//        return length;
//    }
//   /* 执行用时：184 ms, 在所有 C++ 提交中击败了59.16 % 的用户
//        内存消耗：94 MB, 在所有 C++ 提交中击败了20.64 % 的用户*/
//    int islandPerimeter2(vector<vector<int>>& grid) {
//        int m = grid.size();
//        if (m == 0)return 0;
//        int n = grid[0].size();
//        if (n == 0)return 0;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (grid[i][j] == 1) {
//                    return dfs(grid, i, j, m, n);
//                }
//            }
//        }
//        
//        return 0;
//    }
//    int dfs(vector<vector<int>>& grid, int x, int y,int m,int n) {
//        if (x<0 || x==m || y<0 || y==n)
//            return 1;
//        else if (grid[x][y] == 0) {
//            return 1;
//        }
//        else if(grid[x][y] == 1){
//            grid[x][y] = 2;
//            
//                return   dfs(grid, x+1, y, m, n) + dfs(grid, x, y + 1, m, n) + dfs(grid, x-1, y, m, n) + dfs(grid, x, y-1, m, n);
//        }
//        else {
//            return 0;
//        }
//    }
//    //dfs
//    //执行用时：284 ms, 在所有 C++ 提交中击败了5.02% 的用户
//    //内存消耗：94.6 MB, 在所有 C++ 提交中击败了6.88 % 的用户
//};
//
//
//int main() {
//    Solution b;
//    vector<vector<int>> grid = { {0,0,0,1,} };
//    b.islandPerimeter2(grid);
//}