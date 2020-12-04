//#include<iostream>
//#include<stdio.h>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<time.h>
//#include<unordered_set>
//#include<unordered_map>
//using namespace std;
//
//class RandomizedCollection {
//public:
//    vector<int> num;
//    int size = 0;
//    unordered_map<int, unordered_set<int>> hash;
//    /** Initialize your data structure here. */
//    RandomizedCollection() {
//    }
//
//    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
//    bool insert(int val) {
//        bool ans;
//        if(hash[val].size()==0)ans = true;
//        else {
//            ans = false;
//        }
//        num.push_back(val);
//        hash[val].insert(size++);
//        
//        return ans;
//    }
//
//    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
//    bool remove(int val) {
//        bool ans=true;
//        if (hash[val].size() == 0)ans = false;
//        else if (size == 1) {
//            size = 0;
//            num.pop_back();
//            hash[val].clear();
//        }
//        else {
//            int  temp = *hash[val].begin();
//            num[temp] = num[--size];
//            num.pop_back();
//            hash[val].erase(temp);
//            hash[val].insert(size-1);
//        }
//        return ans;
//    }
//
//    /** Get a random element from the collection. */
//    int getRandom() { 
//        return num[rand() % size];
//    }
//};
//
///**
// * Your RandomizedCollection object will be instantiated and called as such:
// * RandomizedCollection* obj = new RandomizedCollection();
// * bool param_1 = obj->insert(val);
// * bool param_2 = obj->remove(val);
// * int param_3 = obj->getRandom();
// */
//
//
//int main() {
// 
//    RandomizedCollection collection;
//
//    // 向集合中插入 1 。返回 true 表示集合不包含 1 。
//    collection.insert(1);
//
//    // 向集合中插入另一个 1 。返回 false 表示集合包含 1 。集合现在包含 [1,1] 。
//    collection.insert(1);
//
//   
//    // 从集合中删除 1 ，返回 true 。集合现在包含 [1,2] 。
//    collection.remove(1);
//
//    // getRandom 应有相同概率返回 1 和 2 。
//    collection.getRandom();
//
//}