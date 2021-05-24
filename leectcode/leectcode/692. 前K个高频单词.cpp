//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//
//struct node {
//    char c;
//    int times = 0;
//    vector<node*> next;
//    node(char v) {
//        c = v;
//    }
//    node() {
//       
//    }
//};
//class Solution {
//public:
//    vector<string> topKFrequent(vector<string>& words, int k) {
//        map<string, int> m;
//        vector<string> ans;
//        for (string item : words) {
//            m[item]++;
//        }
//        sort(m.begin(), m.end());
//        auto temp = m.begin();
//        for (int i = 0; i < k; i++) {
//            ans.push_back(temp->first);
//            temp++;
//        }
//    }
//   /* vector<string> topKFrequent(vector<string>& words, int k) {
//        node* root = new node();
//        for (auto item : words) {
//            add(root, item, 0);
//        }
//    }
//    void add(node* root, string& word, int j) {
//        int size = root->next.size();
//        if (j == word.length()) {
//            root->times++;
//            return;
//        }
//        for (int i = 0; i < size; i++) {
//            if (word[j] == root->next[i]->c) {
//                add(root->next[i], word, j + 1);
//                return;
//            }
//        }
//        root->next.push_back(new node(word[j]));
//        add(root->next[size], word, j + 1);
//        return;
//
//    }*/
//};
//
//
//int main() {
//    Solution b;
//
//}