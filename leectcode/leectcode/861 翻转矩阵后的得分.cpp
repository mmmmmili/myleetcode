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
 /*   ִ����ʱ��4 ms, ������ C++ �ύ�л�����83.75 % ���û�
        �ڴ����ģ�8.3 MB, ������ C++ �ύ�л�����26.81 % ���û�*/
    /*��һ����������ȫ����λ1����֤���λȫ��ȡ�������в�Ϊ1����ȫ����ת

        �ڶ������ӵڶ��п�ʼ������������1������С��0���������з�ת����֤ȡ1�����������ܶ�

        ������������������*/
};


int main() {
    Solution b;
    vector<vector<int>> A = { {0, 0, 1, 1},{1, 0, 1, 0},{1, 1, 0, 0} };
    vector<vector<int>>C = { {0, 1},{ 0,1},{ 0, 1},{ 0, 0} };
    b.matrixScore(A);
}