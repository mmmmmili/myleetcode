//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
//
//
//class Solution {
//public:
//    
//    bool isLongPressedName(string name, string typed) {
//        int i = 0, j = 0;
//        int max1 = name.size(), max2 = typed.size();
//        while (i < max1 && j < max2) {
//            if (name[i] == typed[j]) {
//                i++;
//                j++;
//            }
//            else if (j >= 1 && typed[j - 1] == typed[j]) {
//                j++;
//
//            }
//            else {
//                return false;
//            }
//        }
//        if (i != max1)return false;
//        while (j < max2) {
//            if (typed[j - 1] != typed[j])return false;
//            j++;
//        }
//        return true;
//    }
//   /* ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00 % ���û�
//        �ڴ����ģ�6.5 MB, ������ C++ �ύ�л�����7.95 % ���û�*/
//
//};
//int main() {
//    Solution b;
//    b.isLongPressedName("alex", "aaleex");
//}