/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//better solution with slow fast
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode dummy;
        dummy.next = head;
        ListNode* slow = &dummy;
        ListNode* fast = &dummy;
        //move fast n+1 so that you are one before the nth node with slow
        int stepsToMoveFast = n+1;
        while(stepsToMoveFast !=0){
            fast = fast->next;
            stepsToMoveFast--;
        }
        while(fast!=nullptr){
            slow = slow->next;
            fast= fast->next;
        }
        slow->next = slow->next->next;
        return dummy.next;
    }
};

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int nodeCount = 0;
//         ListNode* end = head;
//         while(end!=nullptr){
//             end = end->next;
//             nodeCount++;
//         }
//         //one node case
//         if(nodeCount ==1){
//             return nullptr;
//         }
//         //remove head case
//         if(nodeCount ==n){
//             head = head->next;
//             return head;
//         }
//         int removeNodePos= nodeCount-n;
//         ListNode* curr = head;
//         for(int i = 1; i<(removeNodePos); i++){
//             curr = curr->next;
//         }
//         curr->next = curr->next->next;
//         return head;
//     }
// };
