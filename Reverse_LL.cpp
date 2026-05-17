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
class Solution {
public:
    ListNode* reverse(ListNode* &prev, ListNode* &curr){
        if(curr == NULL){
            return prev;
        }
        ListNode* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        return reverse(prev,curr);

    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* newHead = reverse(prev,curr);
        return newHead;
        
    }
};