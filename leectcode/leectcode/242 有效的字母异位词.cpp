//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//
//
//class Solution {
//public:
//    bool isAnagram2(string s, string t) {
//        
//        unordered_multiset<char> hash;
//        int size1 = s.size(), size2 = t.size();
//        if (size1 != size2)return false;
//       
//        for (int i = 0; i < size1; i++) {
//            hash.insert(s[i]);
//        }
//        for (int i = 0; i < size1; i++) {
//            if (hash.count(t[i]) == 0)return false;
//            else{
//                hash.erase(hash.find(t[i]));
//            }
//        }
//        return hash.size()==0;
//    }//��ʱ��
//    bool isAnagram(string s, string t) {
//
//       
//        int size1 = s.size() ;
//        if (t.size() != size1)return false;
//        int a = INT_MAX,b=0;
//        for (int i = 0; i < size1; i++) {
//            a = a ^ (int)s[i];
//            b = b + (int)s[i];
//        }
//        for (int i = 0; i < size1; i++) {
//            a = a ^ (int)t[i];
//            b = b - (int)s[i];
//        }
//        return a == INT_MAX&&b==0;
//    }//��ok
//    bool isAnagram(string s, string t) {
//
//        int alp[26] = { 0 };
//        int size1 = s.size();
//        if (t.size() != size1)return false;
//        for (int i = 0; i < size1; i++) {
//            alp[s[i] - 'a']++;
//        }
//        for (int i = 0; i < size1; i++) {
//            alp[t[i] - 'a']--;
//        }
//        for (int i = 0; i < 26; i++) {
//            if(alp[i]!=0)return false;
//        }
//        return true;
//    }
//  /*  ִ����ʱ��4 ms, ������ C++ �ύ�л�����98.93 % ���û�
//        �ڴ����ģ�7.7 MB, ������ C++ �ύ�л�����6.36 % ���û�*/
//};
//int main() {
//    Solution b;
//    b.isAnagram("anagram"
//        , "nagaram");
//}