//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//class Solution {
//public:
//    int maximumGap(vector<int>& nums) {
//        if (nums.size() == 0)return 0;
//        sort(nums.begin(), nums.end());
//        int sum = 0;
//        for (int i = 0; i < nums.size() - 1; i++) {
//            sum = nums[i + 1] - nums[i] > sum ? nums[i + 1] - nums[i] : sum;
//
//        }
//        return sum;
//
//    }
//};/* ִ����ʱ��16 ms, ������ C++ �ύ�л�����50.11 % ���û�
//�ڴ����ģ�8.7 MB, ������ C++ �ύ�л�����68.39 % ���û�*/
//
//
//
//
//int main() {
//    Solution b;
//    Solution1 c;
//    c.translateNum(25);
//}