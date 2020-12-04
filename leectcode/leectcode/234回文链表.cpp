//
//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
//
//
//
//
// struct ListNode {
//     int val;
//   ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
// };
// 
//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//        if (head == nullptr)return true;
//        if (head->next == nullptr)return true;
//        ListNode* fast = head,*slow=head;
//        while (fast->next != nullptr) {
//            fast = fast->next;
//            if(fast->next)fast = fast->next;
//            else {
//                break;
//            }
//                slow = slow->next;
//        }
//        reverse(slow, fast);
//        ListNode* ptr = head;
//        slow = slow->next;
//        while (slow) {
//            if (ptr->val != slow->val)return false;
//            slow = slow->next;
//            ptr = ptr->next;
//        }
//        return true;
//    }
//    void reverse(ListNode* beforeHead, ListNode* tail) {
//        if (beforeHead ->next==tail)return;
//        ListNode* ptr = beforeHead,*end=tail;
//        while(beforeHead->next != tail){
//            ptr = beforeHead->next;
//            beforeHead->next = ptr->next;
//            ptr->next = end->next;
//            end->next = ptr;
//             }
//    }
//    /*执行用时：36 ms, 在所有 C++ 提交中击败了45.94 % 的用户
//        内存消耗：14.1 MB, 在所有 C++ 提交中击败了40.53 % 的用户*/
//};
//int main() {
//    Solution b;
//    int a = INT16_MAX ^ 1;
//    cout << INT16_MAX<<endl<< a <<endl<< (a ^ 1);
//    ListNode* ptr = new ListNode(1);
//    ptr->next = new ListNode(2);
//    ptr->next->next = new ListNode(3);
//    ptr->next->next->next = new ListNode(4);
//    ptr->next->next->next->next = new ListNode(3);
//    ptr->next->next->next->next->next = new ListNode(2);
//    ptr->next->next->next->next->next->next = new ListNode(1);
//    b.isPalindrome(ptr);
//}