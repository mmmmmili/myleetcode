//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    int largestPerimeter(vector<int>& A) {
//        sort(A.begin(), A.end());
//        int size = A.size(),sum=0;
//        
//        for (int i = size - 1; i > 1; i--) {
//            if (A[i - 1] + A[i - 2] > A[i])
//                return A[i - 1] + A[i - 2] + A[i];
//        }
//       
//        return 0;
//
//    }
//  /*  ִ����ʱ��164 ms, ������ C++ �ύ�л�����5.92 % ���û�
//        �ڴ����ģ�20.5 MB, ������ C++ �ύ�л�����38.68 % ���û�*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a = { 3,6,2,3 };
//    b.largestPerimeter(a);
//}