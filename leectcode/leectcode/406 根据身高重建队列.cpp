//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
//        int size = people.size();
//        vector<vector<int>> ans;
//        auto compare = [&](vector<int>& a1, vector<int>& a2) {
//            if (a1[0] > a2[0])return true;
//            else if (a1[0] < a2[0])return false;
//            return a1[1] < a2[1];
//        };
//        sort(people.begin(), people.end(), compare);
//        for (auto person:people) {
//            ans.insert(ans.begin() + person[1], person);
//        }
//        return ans;
//
//       
//
//    }
//   /* ִ����ʱ��320 ms, ������ C++ �ύ�л�����53.80 % ���û�
//        �ڴ����ģ�12.1 MB, ������ C++ �ύ�л�����39.90 % ���û�*/
//};
//int main() {
//    Solution b;
//
//}