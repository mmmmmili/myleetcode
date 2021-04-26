//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//struct Node {
//    
//    char c;
//    bool isWord = false;
//    Node* next[26] = {};
//};
//class Trie {
//private :
//    Node* root;
//public:
//    /** Initialize your data structure here. */
//    Trie() {
//        root = new Node();
//    }
//
//    /** Inserts a word into the trie. */
//    void insert(string word) {
//        int size = word.length();
//        Node* temp=root;
//        for (int i = 0;i < size;i++) {
//            if (temp->next[word[i] - 'a'] == NULL) {
//                temp->next[word[i] - 'a'] = new Node();
//                temp->next[word[i] - 'a']->c = word[i];
//            }
//            temp = temp->next[word[i] - 'a'];
//        }
//        temp->isWord = true;
//
//    }
//
//    /** Returns if the word is in the trie. */
//    bool search(string word) {
//        int size = word.length();
//        Node* temp = root;
//        for (int i = 0;i < size;i++) {
//            if (temp->next[word[i] - 'a'] == NULL) {
//                return false;
//            }
//            temp = temp->next[word[i] - 'a'];
//        }
//        return temp->isWord == true;
//    }
//
//    /** Returns if there is any word in the trie that starts with the given prefix. */
//    bool startsWith(string prefix) {
//        int size = prefix.length();
//        Node* temp = root;
//        for (int i = 0;i < size;i++) {
//            if (temp->next[prefix[i] - 'a'] == NULL) {
//                return false;
//            }
//            temp = temp->next[prefix[i] - 'a'];
//        }
//        return true;
//    }
//};
//
///**
// * Your Trie object will be instantiated and called as such:
// * Trie* obj = new Trie();
// * obj->insert(word);
// * bool param_2 = obj->search(word);
// * bool param_3 = obj->startsWith(prefix);
// */