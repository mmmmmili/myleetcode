//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//#include <unordered_map>
//#include<set>
//using namespace std;
//class Solution {
//public:
//    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
//        int size1 = matrix.size(),size2 = matrix[0].size();
//        vector<vector<int>>sum(size1+1, vector<int>(size2+1, 0));
//        //�ʼ���ڱ��� sum[i][0] sum[0][j]
//        //�ȴ���ǰ׺��
//        
//        //�����û���ڱ���
//       /* sum[0][0] = matrix[0][0];
//        for (int i = 1;i < size1;i++) {
//            sum[i][0]= matrix[i][0]+sum[i-1][0];
//        }
//        for (int j = 1;j < size2;j++) {
//            sum[0][j] = sum[0][j - 1]+ matrix[0][j];
//        }
//        for (int i = 1;i < size1;i++) {
//            for (int j = 1;j < size2;j++) {
//                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i][j];
//
//            }
//        }*/
//
//
//        //��������ڱ���
//        for (int i = 1;i <= size1;i++) {
//            for (int j = 1;j <= size2;j++) {
//                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
//
//            }
//        }
//        int ans = INT_MIN;
//        set<int> min_sum;
//        for (int top = 1;top <= size1;top++) {
//            for (int bottom = top;bottom <= size1;bottom++) {
//                min_sum.clear();
//                min_sum.insert(0);
//                for (int r = 1;r <= size2;r++) {
//                    int right = sum[bottom][r] - sum[top - 1][r];
//                   
//                    //lower_bound()����ֵ��һ��������,����ָ����ڵ���key�ĵ�һ��ֵ��λ��
//                    auto left = min_sum.lower_bound(right - k);
//                    if (left != min_sum.end()) {
//                        int cur = right - *left;
//                        ans = max(ans, cur);
//                    }
//                    min_sum.insert(right);
//
//                }
//            }
//        }
//        
//        return ans;
//    }
//   /* ִ����ʱ��652 ms, ������ C++ �ύ�л�����29.68 % ���û�
//        �ڴ����ģ�128.3 MB, ������ C++ �ύ�л�����5.11 % ���û�*/
//};
//int main() {
//
//}