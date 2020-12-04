//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
// 
//class Solution {
//public:
//    ListNode* sortList1(ListNode* head) {
//        if (head == nullptr)return head;
//        ListNode* ptr = new ListNode(-9999, head), * p1, * p2, * end = head, * p4;
//        //end是已经排好序的最后一个元素
//        p1 = ptr;
//        p2 = ptr->next;
//        p4 = end->next;
//        //插入排序
//        while (p4) {
//            p1 = ptr;
//            p2 = ptr->next;
//
//            while (p2 && p2 != end) {
//                if (p2->val > p4->val) {
//                    end->next = p4->next;
//
//                    p1->next = p4;
//                    p4->next = p2;
//                    break;
//
//                }
//                p1 = p2;
//                p2 = p2->next;
//            }
//            if (p2 == end) {
//                if (p2->val > p4->val) {
//                    end->next = p4->next;
//
//                    p1->next = p4;
//                    p4->next = p2;
//
//                }
//                else { end = end->next; }
//            }
//            p4 = end->next;
//        }
//        return ptr->next;
//
//    }
//    ListNode* sortList(ListNode* head) {       
//        return mergeSort(head,NULL);
//
//    }
//    ListNode* mergeSort(ListNode* first, ListNode* end) {
//        if (first == NULL || first->next == end)return first;
//        ListNode* fast= first, *slow= first,*l2;
//        while (fast->next !=end) {
//            fast = fast->next;
//            
//            if (fast->next != end)
//                fast = fast->next;
//            else break;
//            slow = slow->next;
//            
//        }
//        l2 = slow->next;
//        slow->next = NULL;
//        return  mergeTwoLists(mergeSort(first, slow->next), mergeSort(l2, end));
//       
//
//    }
//    //超时了
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* first = new ListNode(0), * ptr = first;
//        while (l1 && l2) {
//            if (l1->val <= l2->val) {
//                ptr->next = l1;
//                ptr = ptr->next;
//                l1 = l1->next;
//            }
//            else {
//                ptr->next = l2;
//                ptr = ptr->next;
//                l2 = l2->next;
//            }
//
//        }
//        ptr->next = l1 ? l1 : l2;
//        return first->next;
//
//
//    }
//  /*  执行用时：184 ms, 在所有 C++ 提交中击败了18.52 % 的用户
//        内存消耗：49.2 MB, 在所有 C++ 提交中击败了5.03 % 的用户*/
//};
//int main() {
//    Solution b;
//    ListNode* a = new ListNode(4);
//        a->next= new ListNode(1);
//        a->next->next = new ListNode(3);
//        /*b.sortList(a);*/
//        b.sortList(NULL);
//    //    b.insertionSortList(a);
//}