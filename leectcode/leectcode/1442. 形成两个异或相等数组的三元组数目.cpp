//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//struct node {
//    int val;
//    node* left = NULL, * right = NULL;
//};
//class Solution {
//public:
//    int countTriplets(vector<int>& arr) {
//        int size = arr.size(),ans=0;
//        vector<int> s(size + 1,0);
//        for (int i = 0; i < size; i++) {
//            s[i + 1] = s[i] ^ arr[i];
//        }
//        for (int i = 0; i < size; i++) {
//            for (int j = i+1; j < size; j++) {
//                for (int k = j; k < size; k++)
//                    if (s[i] == s[k + 1])ans++;
//            }
//        }
//        return ans;
//    }
//   /* ִ����ʱ��164 ms, ������ C++ �ύ�л�����13.49 % ���û�
//        �ڴ����ģ�7.5 MB, ������ C++ �ύ�л�����32.09 % ���û�*/
//
//};
//
//
//int main() {
//    Solution b;
//
//}