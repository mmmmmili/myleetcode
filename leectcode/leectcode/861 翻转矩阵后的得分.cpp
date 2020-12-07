#include<iostream>
#include<stack>
#include <algorithm>
#include<math.h>
#include<vector>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int size1 = A.size(),size2 = A[0].size(),i,j;
        for (i = 0; i < size1; i++) {
            if (A[i][0] == 0) {
                for (j = 0; j < size2; j++) {
                    A[i][j] = A[i][j] == 0 ? 1 : 0;
                }
            }
        }
        int sum = 0;
        for (j = 1; j < size2; j++) {
            sum = 0;
            for (i = 0; i < size1; i++) {
                sum += A[i][j];
            }
            if ((float)sum < (float)size1 / 2) {
                for (i = 0; i < size1; i++) {
                    A[i][j] = A[i][j] == 0 ? 1 : 0;
                }
            }
        }
        sum = 0;
        for (j = 0; j < size2; j++) {      
            for (i = 0; i < size1; i++) {
                sum += A[i][j]<<(size2-j-1);
            }
            
        }
        
        return sum;
    }
 /*   执行用时：4 ms, 在所有 C++ 提交中击败了83.75 % 的用户
        内存消耗：8.3 MB, 在所有 C++ 提交中击败了26.81 % 的用户*/
    /*第一步：将首列全部置位1，保证最高位全部取到，首列不为1的行全部翻转

        第二步：从第二列开始，将所有列中1的数量小于0的数量的行翻转，保证取1的数量尽可能多

        第三步：计算结果返回*/
};


int main() {
    Solution b;
    vector<vector<int>> A = { {0, 0, 1, 1},{1, 0, 1, 0},{1, 1, 0, 0} };
    vector<vector<int>>C = { {0, 1},{ 0,1},{ 0, 1},{ 0, 0} };
    b.matrixScore(A);
}