//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        vector<int> ans = { -1,-1 };
//        int size = nums.size();
//        for (int i = 0; i < size; i++) {
//            if (nums[i] == target) {
//                ans[0] = i;
//                ans[1] = i;
//                for (int j = i+1; j < size; j++) {
//                    if (nums[j] == target) {
//                        ans[1] = j;
//                    }
//                }
//                break;
//            }
//        }
//       
//        return ans;
//    }
//    /*ִ����ʱ��16 ms, ������ C++ �ύ�л�����92.37 % ���û�
//        �ڴ����ģ�13.7 MB, ������ C++ �ύ�л�����28.05 % ���û�*/
//
//
//    vector<int> searchRange(vector<int>& nums, int target) {
//        vector<int> ans = { -1,-1 };
//        int size = nums.size(),mid;
//        int low = 0, high = size - 1;
//        while (low <= high) {
//            /* �ҵ�Ŀ��ֵ target ʱ�����������أ���С����������Ͻ� high �����������������������߽�*/
//            /*�������������*/
//            mid = (low + high) / 2;
//            if (nums[mid] < target) {
//                low = mid + 1;
//            }
//            else if (nums[mid]==target) {
//                high = mid - 1;///���
//            }
//            else {
//                high = mid - 1;
//            }
//        }
//        /* ѭ���������� low = high + 1 ������ low ��ȡֵ��Χ�� [0, numsSize]�����Ŀ��ֵ target
//      ���������������û���ҵ�(���������� [5,7,7,8,8,10] �в��� 11 �� 6)������ -1 */
//
//      
//        if (low == size || nums[low] != target) {
//
//        }
//        else {
//            ans[0] = low;
//        }
//        
//
//
//        low = 0, high = size - 1;
//        while (low <= high) {
//            //���ҵ�Ŀ��ֵ target ʱ�����������أ���������������½� high �������������������ﵽ�����Ҳ�߽�Ŀ�ġ�
//            mid = (low + high) / 2;
//            if (nums[mid] < target) {
//                low = mid + 1;
//            }
//            else if (nums[mid] == target) {
//                low = mid + 1;;///���
//            }
//            else {
//                high = mid - 1;
//            }
//        }
//
//        if (high<0 || nums[high] != target) {
//
//        }
//        else {
//            ans[1] = high;
//        }
//      
//        return ans;
//    }
//   /* ִ����ʱ��16 ms, ������ C++ �ύ�л�����92.37 % ���û�
//        �ڴ����ģ�13.6 MB, ������ C++ �ύ�л�����37.81 % ���û�*/
//};
//
//
//int main() {
//    Solution b;
//
//}