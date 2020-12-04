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
//    vector<int> partitionLabels1(string S) {
//        //dp[i][j]�Ǵ�i��j���֣�dp[i][j] = ���dp[i][j - 1]ok�Ļ�������j������������
//          //  ��������㣬
//        int size = S.size();
//        
//        vector<int> ans;
//
//        int first = 0, mark = 0;
//        while (mark<size) {
//            for (int i = first; i < size; i++)
//                if (S[i] == S[first])
//                    mark = i;
//            for (int i = first + 1; i < mark; i++) {
//                for (int j = mark; j < size; j++)
//                    if (S[j] == S[i])
//                        mark = j;
//            }
//            ans.push_back(mark - first + 1);
//            first = mark + 1;
//            mark += 1;
//        }
//        return ans;
//    }
//   /* ִ����ʱ��36 ms, ������ C++ �ύ�л�����8.87 % ���û�
//        �ڴ����ģ�6.8 MB, ������ C++ �ύ�л�����38.73 % ���û�*/
//    vector<int> partitionLabels1(string S) {
//        int size = S.size();
//
//        vector<int> ans;
//
//        int last[26];
//
//        for (int i = 0; i < size; i++)
//            last[S[i] - 'a'] = i;
//
//        int start = 0, end = 0;
//        for (int i = 0; i < size; i++) {
//            end = max(last[S[i] - 'a'], end);
//            if (i == end) {
//                ans.push_back(end - start + 1);
//                start = end + 1;
//            }
//        }
//        
//        return ans;
//    }
//   /* ִ����ʱ��8 ms, ������ C++ �ύ�л�����73.45 % ���û�
//        �ڴ����ģ�6.6 MB, ������ C++ �ύ�л�����71.53 % ���û�*/
//};
//int main() {
//    Solution b;
//    vector<int> ans=b.partitionLabels("defegdehijhklij");
//
//}