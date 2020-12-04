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
//    }//超时了
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
//    }//不ok
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
//  /*  执行用时：4 ms, 在所有 C++ 提交中击败了98.93 % 的用户
//        内存消耗：7.7 MB, 在所有 C++ 提交中击败了6.36 % 的用户*/
//};
//int main() {
//    Solution b;
//    b.isAnagram("anagram"
//        , "nagaram");
//}