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
    ListNode* getMiddle(ListNode* head, ListNode* &middlePrev){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
                middlePrev = slow;
                slow = slow->next;
            }
        }
        return slow;
    }
    ListNode* reverseList(ListNode* &prev, ListNode* &curr){
        while(curr != NULL){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        if(head->next == NULL) return true;


        ListNode* firstHalfHead = head;
        ListNode* middlePrev = NULL;
        ListNode* middle = getMiddle(head, middlePrev);
        middlePrev->next = NULL;

        ListNode* prev = NULL;
        ListNode* curr = middle;
        ListNode* secondHalfHead = reverseList(prev,curr);

        ListNode* tempHead1 = firstHalfHead;
        ListNode* tempHead2 = secondHalfHead;
        while(tempHead1 != NULL){
            if(tempHead1->val != tempHead2->val){
                return false;
            }
            else{
                tempHead1 = tempHead1->next;
                tempHead2 = tempHead2->next;
            }
        }
        return true;
    }
};