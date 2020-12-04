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
//   /* ִ����ʱ��184 ms, ������ C++ �ύ�л�����59.16 % ���û�
//        �ڴ����ģ�94 MB, ������ C++ �ύ�л�����20.64 % ���û�*/
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
//    //ִ����ʱ��284 ms, ������ C++ �ύ�л�����5.02% ���û�
//    //�ڴ����ģ�94.6 MB, ������ C++ �ύ�л�����6.88 % ���û�
//};
//
//
//int main() {
//    Solution b;
//    vector<vector<int>> grid = { {0,0,0,1,} };
//    b.islandPerimeter2(grid);
//}