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
//    void moveZeroes(vector<int>& nums) {
//        int size = nums.size(), b = size;
//        for (int i = 0; i < size; i++) {
//            if (nums[i] == 0) {
//                b = i;
//                break;
//            }
//        }
//        for (int i = 0; i < size; i++) {
//            if (nums[i] != 0 && i > b) {
//                nums[b] = nums[i];
//                b++;
//            }
//        }
//        for (int i = b; i < size; i++) {
//            nums[i] = 0;
//        }
//        return;
//
//
//    }/*ִ����ʱ��8 ms, ������ C++ �ύ�л�����91.02 % ���û�
//        �ڴ����ģ�9.2 MB, ������ C++ �ύ�л�����19.35 % ���û�*/
//};
//
//int main() {
//    Solution b;
//
//}