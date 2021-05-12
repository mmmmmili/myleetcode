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
//    vector<int> xorQueries1(vector<int>& arr, vector<vector<int>>& queries) {
//        int size = arr.size();
//        vector<vector<int>> temp(size, vector<int>(size, 0));
//        vector<int> ans;
//        for (int i = 0; i < size; i++) {
//            temp[i][i] = arr[i];
//            for (int j = i + 1; j < size; j++) {
//                temp[i][j] = temp[i][j - 1] ^ arr[j];
//            }
//        }
//        size = queries.size();
//        for (int i = 0; i < size; i++) {
//            ans.push_back(temp[queries[i][0]][queries[i][1]]);
//        }
//        return ans;
//        /*����ʱ������*/
//    }
//
//
//    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//        int size = arr.size();
//        vector<int> temp(size, 0);
//        vector<int> ans;
//        temp[0] = arr[0];
//        for (int i = 1; i < size; i++) {
//            temp[i] = temp[i - 1] ^ arr[i];
//        }
//        size = queries.size();
//        for (int i = 0; i < size; i++) {
//            int first = queries[i][0] - 1;
//            if (first == -1) {
//                ans.push_back(temp[queries[i][1]]);
//            }
//            else {
//                ans.push_back(temp[first] ^ temp[queries[i][1]]);
//            }
//
//        }
//        return ans;
//       /* ִ����ʱ��60 ms, ������ C++ �ύ�л�����99.61 % ���û�
//            �ڴ����ģ�31.9 MB, ������ C++ �ύ�л�����35.29 % ���û�*/
//    }
//};
//
//int main() {
//    Solution b;
//
//}