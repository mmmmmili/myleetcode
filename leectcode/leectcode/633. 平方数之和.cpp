//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//    bool judgeSquareSum1(int c) {
//        set<int> a;
//        for (int i = 0;i < sqrt(c);i++) {
//            a.insert(i * i);
//        }
//        for (auto item : a) {
//            if (a.find(c - item) != a.end())
//                return true;
//        }
//        return false;
//
//    }
// /*   ִ����ʱ��460 ms, ������ C++ �ύ�л�����5.36 % ���û�
//        �ڴ����ģ�68.9 MB, ������ C++ �ύ�л�����5.17 % ���û�*/
//    bool judgeSquareSum(int c) {
//        int k = (int)floor(sqrt(c));
//        double temp;
//        for (int i = 0;i <= k;i++) {
//            temp = sqrt(c - i * i);
//            if (temp-floor(temp) == 0)
//                return true;
//           
//        }
//       
//        return false;
//
//    }
//    /*ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00 % ���û�
//        �ڴ����ģ�5.8 MB, ������ C++ �ύ�л�����41.05 % ���û�*/
//};
//
//
//int main() {
//    Solution b;
//    b.judgeSquareSum(3);
//}