//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//
//class Solution {
//public:
//    void reorderList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//            return;
//        stack< ListNode*> tempStack;
//        ListNode* ptr1 = head, * ptr2 = nullptr;
//        while (ptr1 != nullptr) {
//            tempStack.push(ptr1);
//            ptr1 = ptr1->next;
//        }
//        ptr1 = head;
//        ptr2 = tempStack.top();
//        while (ptr1 != ptr2 && ptr2->next != ptr1&&ptr1!=nullptr) {
//            tempStack.pop();
//            tempStack.top()->next = NULL;
//            ptr2->next = ptr1->next;
//            ptr1->next = ptr2;   
//
//            ptr1 = ptr1->next->next;
//            ptr2 = tempStack.top();  
//        }
//        return;
//    }
//    /*执行用时：84 ms, 在所有 C++ 提交中击败了13.09 % 的用户
//        内存消耗：18.4 MB, 在所有 C++ 提交中击败了7.57 % 的用户*/
//    
//};
//int main() {
//    Solution b;
//    ListNode* a = new ListNode(3);
//    a->next = new ListNode(4);
//    a->next->next = new ListNode(5);
//    a->next->next->next = new ListNode(6);
//    b.reorderList(a);
//}