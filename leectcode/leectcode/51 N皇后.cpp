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
//    //    unordered_set<int> diaglose1;//row-col ȡģ2n-1
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
//        /*ִ����ʱ��40 ms, ������ C++ �ύ�л�����22.14 % ���û�
//        �ڴ����ģ�9.6 MB, ������ C++ �ύ�л�����20.50 % ���û�*/
//    //vector<vector<string>> solveNQueens(int n) {
//    //    vector<vector<string>> solution;
//    //    vector<int> col;
//    //    unordered_set<int> diaglose1;//row-col ȡģ2n-1
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
//    /*ִ����ʱ��44 ms, ������ C++ �ύ�л�����18.37 % ���û�
//        �ڴ����ģ�9.3 MB, ������ C++ �ύ�л�����27.71 % ���û�*/
//    vector<vector<string>> solveNQueens(int n) {
//        vector<vector<string>> solution;
//        vector<int> col;
//        vector<int> diaglose1(2*n-1,0);//row-col ȡģ2n-1
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
//    /*ִ����ʱ��20 ms, ������ C++ �ύ�л�����37.19 % ���û�
//        �ڴ����ģ�8.1 MB, ������ C++ �ύ�л�����35.75 % ���û�*/
//};
//int main() {
//    Solution b;
//    b.solveNQueens(4);
//}