//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    bool validMountainArray(vector<int>& A) {
//        bool isUp = true;
//        int size = A.size();
//        if (size < 3)return false;
//        if (A[0] > A[1])return false;
//        for (int i = 0; i < size - 1; i++) {
//            if (A[i] == A[i + 1]) {
//                return false;
//            }
//            else if (isUp && A[i] > A[i + 1]) {
//                isUp = false;
//            }
//            else if (!isUp && A[i] < A[i + 1]) {
//                return false;
//            }
//
//        }
//        return isUp == false;
//    }
//};
////ִ����ʱ��56 ms, ������ C++ �ύ�л�����90.92 % ���û�
////�ڴ����ģ�21.2 MB, ������ C++ �ύ�л�����5.27 % ���û�
//
//
//int main() {
//    Solution b;
//
//}