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
//    void nextPermutation(vector<int>& nums) {
//        int size = nums.size(), flag = 0;
//        for (int i = size - 2; i >= 0; i--) {
//            if (nums[i + 1] >nums[i]) {
//                int tempIndex = i;//�ҳ���nums[i]�����С��ֵ������nums[i]�ĺ�̣���ʱ��i��size-1��������һ��ɽ�壬���� 7 98765 ��������ʽ
//                for (int j = i; j < size; j++) {
//                    if (nums[j] > nums[i]) {
//                        tempIndex = j;
//                    }
//                    
//                }
//                swap(nums[i], nums[tempIndex]);
//                sort(nums.begin() + i + 1, nums.end());
//                return;
//            }
//
//
//        }
//        sort(nums.begin(), nums.end());
//        return;
//    }
//   /* ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00 % ���û�
//        �ڴ����ģ�12 MB, ������ C++ �ύ�л�����44.26 % ���û�*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a = {2,3,1};
//    b.nextPermutation(a);
//}