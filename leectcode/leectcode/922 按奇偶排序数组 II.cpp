//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> sortArrayByParityII(vector<int>& A) {
//        vector<int> a0, a1;
//        for (int i = 0; i < A.size(); i++) {
//            if (i % 2 == 0 && A[i] % 2 == 1) {
//                a0.push_back(i);
//            }
//            else if (i % 2 == 1 && A[i] % 2 == 0) {
//                a1.push_back(i);
//            }
//        }
//        for (int i = 0; i < a0.size(); i++) {
//            swap(A[a0[i]], A[a1[i]]);
//        }
//        return A;
//    }/*ִ����ʱ��40 ms, ������ C++ �ύ�л�����91.77 % ���û�
//        �ڴ����ģ�21.3 MB, ������ C++ �ύ�л�����15.37 % ���û�*/
//    
//};
//
//
//int main() {
//    Solution b;
//
//}