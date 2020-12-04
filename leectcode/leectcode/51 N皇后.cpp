//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//class Solution {
//public:
//    //vector<vector<string>> solveNQueens(int n) {
//    //    vector<vector<int>> tempsolution(n, vector<int>(n, 0));
//    //    vector<vector<string>> solution;
//    //    unordered_set<int> col;
//    //    unordered_set<int> diaglose1;//row-col 取模2n-1
//    //    unordered_set<int> diaglose2;//row+col
//    //    back(tempsolution, solution, 0, n, col, diaglose1, diaglose2);
//    //    return solution;
//    //}
//    //void back(vector<vector<int>>& tempsolution, vector<vector<string>>& solution, int row, int n, unordered_set<int>& col, unordered_set<int>& diaglose1, unordered_set<int>& diaglose2) {
//    //    if (row == n) {
//    //        vector<string> h;
//    //        for (int i = 0; i < n; i++) {
//    //            string a = "";
//    //            for (int j = 0; j < n; j++) {
//    //                if (tempsolution[i][j] == 0)a += ".";
//    //                else a += "Q";
//    //            }
//    //            h.push_back(a);
//    //        }
//    //        solution.push_back(h);
//    //    }
//    //    for (int i = 0; i < n; i++) {
//    //        if (col.count(i) == 0 && diaglose1.count(row - i + n - 1) == 0 && diaglose2.count(row + i) == 0) {
//    //            col.insert(i);
//    //            diaglose1.insert(row - i + n - 1);
//    //            diaglose2.insert(row + i);
//    //            tempsolution[row][i] = 1;
//    //            back(tempsolution, solution, row + 1, n, col, diaglose1, diaglose2);
//    //            tempsolution[row][i] = 0;
//    //            col.erase(i);
//    //            diaglose1.erase(row - i + n - 1);
//    //            diaglose2.erase(row + i);
//    //        }
//
//    //    }
//
//    //}
//        /*执行用时：40 ms, 在所有 C++ 提交中击败了22.14 % 的用户
//        内存消耗：9.6 MB, 在所有 C++ 提交中击败了20.50 % 的用户*/
//    //vector<vector<string>> solveNQueens(int n) {
//    //    vector<vector<string>> solution;
//    //    vector<int> col;
//    //    unordered_set<int> diaglose1;//row-col 取模2n-1
//    //    unordered_set<int> diaglose2;//row+col
//    //    back(solution, 0, n, col, diaglose1, diaglose2);
//    //    return solution;
//    //}
//    //void back(vector<vector<string>>& solution, int row,int n, vector<int>& col, unordered_set<int>& diaglose1, unordered_set<int>& diaglose2) {
//    //    if (row == n) {
//    //        vector<string> h;
//    //        for (int i = 0; i < n; i++) {
//    //            string a = "";
//    //            for (int j = 0; j < n; j++) {
//    //                if (j==col[i])a += "Q";
//    //                else a += ".";
//    //            }
//    //            h.push_back(a);
//    //        }
//    //        solution.push_back(h);
//    //    }
//    //    for (int i = 0; i < n; i++) {
//    //        if (find(col.begin(),col.end(),i)==col.end()&& diaglose1.count(row - i + n - 1) == 0 && diaglose2.count(row + i) == 0) {
//    //            col.push_back(i);
//    //            diaglose1.insert(row - i + n - 1);
//    //            diaglose2.insert(row + i);
//    //            back( solution, row + 1, n, col, diaglose1, diaglose2);
//    //            col.pop_back();
//    //            diaglose1.erase(row - i + n - 1);
//    //            diaglose2.erase(row + i);
//    //        }  
//    //    }
//    //}
//
//
//    /*执行用时：44 ms, 在所有 C++ 提交中击败了18.37 % 的用户
//        内存消耗：9.3 MB, 在所有 C++ 提交中击败了27.71 % 的用户*/
//    vector<vector<string>> solveNQueens(int n) {
//        vector<vector<string>> solution;
//        vector<int> col;
//        vector<int> diaglose1(2*n-1,0);//row-col 取模2n-1
//        vector<int> diaglose2(2 * n - 1, 0);//row+col
//        back(solution, 0, n, col, diaglose1, diaglose2);
//        return solution;
//    }
//    void back(vector<vector<string>>& solution, int row, int n, vector<int>& col, vector<int>& diaglose1, vector<int>& diaglose2) {
//        if (row == n) {
//            vector<string> h;
//            for (int i = 0; i < n; i++) {
//                string a = "";
//                for (int j = 0; j < n; j++) {
//                    if (j == col[i])a += "Q";
//                    else a += ".";
//                }
//                h.push_back(a);
//            }
//            solution.push_back(h);
//        }
//        for (int i = 0; i < n; i++) {
//            if (find(col.begin(), col.end(), i) == col.end() && diaglose1[row - i + n - 1] == 0 && diaglose2[row + i]== 0) {
//                col.push_back(i);
//                diaglose1[row - i + n - 1] = 1;
//                diaglose2[row + i] = 1;
//                back(solution, row + 1, n, col, diaglose1, diaglose2);
//                col.pop_back();
//                diaglose1[row - i + n - 1] =0;
//                diaglose2[row + i] = 0;
//            }
//        }
//    }
//    /*执行用时：20 ms, 在所有 C++ 提交中击败了37.19 % 的用户
//        内存消耗：8.1 MB, 在所有 C++ 提交中击败了35.75 % 的用户*/
//};
//int main() {
//    Solution b;
//    b.solveNQueens(4);
//}