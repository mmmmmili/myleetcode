//#include<iostream>
//#include<set>
//#include <map>
//#include <unordered_map>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//    
//    
//    vector<string> commonChars(vector<string>& A) {
//        struct two {
//            char a;
//            int cnt;
//            two(char a, int b) :a(a), cnt(b) {}
//            bool operator<(const two b) const{
//                return (a < b.a|| (a == b.a&&cnt<b.cnt));
//            }
//           /* bool operator>(const two b) const{
//                return (a > b.a || (a == b.a && cnt > b.cnt));
//            }*/
//        };
//        map<two,int> hash;
//        hash.clear();
//        int totalNum = A.size();
//        vector<string> ans;
//        
//        for (auto item : A) {
//            for (int i = 0; i < item.size();i++) {
//                int No = 0;
//                for (int j = 0; j < i; j++) {
//                    if (item[i] == item[j])No++;
//                }
//                two temp(item[i], No);
//                if (hash.find(temp)==hash.end())hash.insert(make_pair(temp,1));
//                else {
//                    hash[temp]++;
//                }
//           }
//        }
//        
//        for (auto item : hash) {
//            if (item.second == totalNum) {
//                ans.push_back(string(1,item.first.a));
//            }
//        }
//        return ans;
//    }
//    /*执行用时：116 ms, 在所有 C++ 提交中击败了5.06 % 的用户
//        内存消耗：9.7 MB, 在所有 C++ 提交中击败了28.90 % 的用户*/
//    vector<string> commonChars(vector<string>& A) {
//        vector<int> minfreq(26, INT_MAX);
//        vector<int> freq(26);
//        for (const string& word : A) {
//            fill(freq.begin(), freq.end(), 0);
//            for (char ch : word) {
//                ++freq[ch - 'a'];
//            }
//            for (int i = 0; i < 26; ++i) {
//                minfreq[i] = min(minfreq[i], freq[i]);
//            }
//        }
//
//        vector<string> ans;
//        for (int i = 0; i < 26; ++i) {
//            for (int j = 0; j < minfreq[i]; ++j) {
//                ans.emplace_back(1, i + 'a');
//            }
//        }
//        return ans;
//    }
//   /* 执行用时：12 ms, 在所有 C++ 提交中击败了91.96 % 的用户
//        内存消耗：8.9 MB, 在所有 C++ 提交中击败了66.82 % 的用户*/
//};
//int main() {
//    Solution b;
//    vector<string> A = { "bella", "label", "roller" };
//    vector<string> C=b.commonChars(A);
//    for (auto item : C) {
//        cout << item<<" ";
//    }
//   
//}