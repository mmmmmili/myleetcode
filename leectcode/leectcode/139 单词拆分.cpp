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
//    //bool wordBreak(string s, vector<string>& wordDict) {
//    //    /*dp[i][j] = k
//    //        ��i��j�ĵ���������k��
//    //        ��ô��̬�滮�أ�
//    //        ����leetcode��ÿһ����ɨһ�飬��ʼ��һ��ij��Ȼ����������һ�£�*/
//    //    int size = s.size();
//    //    vector<vector<int> > dp (size, vector<int>(size,0));
//    //    for (auto& item : wordDict) {
//    //        compare(s, item, dp);
//
//    //        for (int i = 0; i < size; i++) {
//    //            for (int j = 0; j < size; j++) {
//    //                cout << dp[i][j];
//    //            }
//    //            cout << endl;
//    //        }
//
//    //    }
//    //    return dfs(size,0, dp);
//    //    
//    //    
//    //}
//    //bool dfs(int size, int end,vector<vector<int> >& dp) {
//    //    if (end == size) {
//    //        return true;
//    //    }
//    //    for (int i = end; i < size; i++) {
//    //        if (dp[end][i] == 1&& dfs(size, i + 1, dp)) {
//    //            return true;
//    //        }
//    //    }
//    //    return false;
//    //}
//    //void compare(string& s, string& stander, vector<vector<int> >& dp) {
//    //    int size1 = s.size(), size2 = stander.size();
//    //    for (int i = 0; i < size1 - size2 + 1; i++) {
//    //        if (s[i] == stander[0]) {
//    //            bool flag = 1;
//    //            int j = 1;
//    //            while (j < size2&&flag) {
//    //                if (s[i + j] != stander[ j])
//    //                    flag = 0;
//    //                j++;
//    //            }
//    //            if (flag)dp[i][i + size2 - 1] = 1;
//    //        }
//    //    }
//    //}
//    //��ʱ��
//
//    bool wordBreak(string s, vector<string>& wordDict) {
//        /*dp[i]= 
//            ��i��j�ĵ����ǿ��Ա����ֵ�
//            ��ô��̬�滮�أ�
//           ����j+1��size-1֮��ɲ����Ա�����*/
//        int size = s.size();
//        vector<int>  dp (size, 0);
//        for (int i = 0; i < size; i++) {
//            if (dp[i] == 0) {
//                find(s, i, wordDict, dp);
//            }
//            
//        }   
//        
//        
//    }
//    
//    void find(string& s, int i, vector<string>& wordDict,vector<int>& dp) {
//        
//        for (int j = 0; j < wordDict.size(); j++) {
//            int temp=compare(s, i, wordDict[j]);
//            if (temp != -1) {
//                dp[temp] = 1;
//            }
//        }
//    }
//	int compare(string& s, int number, string& stander) {//��s[number]��s[number+size-1]
//		int size1 = s.size(), size2 = stander.size();
//		if (s[number] == stander[0]) {
//			bool flag = 1;
//			int j = 1;
//			while (j < size2 && flag&& number + j<size1) {
//				if (s[number + j] != stander[j])
//					flag = 0;
//				j++;
//			}
//			if (flag && j == size2)return number + size2 - 1;
//		}
//
//        return -1;
//	}
//
//};
//
//int main() {
//    Solution b;
//    vector<string> a{ "leet", "code" };
//    b.wordBreak("leetcode",a);
//}