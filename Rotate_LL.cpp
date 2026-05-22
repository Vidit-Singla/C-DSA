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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return nullptr;
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        k = k%len;
        if(k==0) return head;
        temp = head;
        for(int i=0; i<len-k-1; i++){
            temp = temp->next;
        }
        ListNode* forw = temp->next;
        ListNode* forHead = temp->next;
        for(int i=0; i<k-1; i++){
            forw = forw ->next;
        }
        
        forw->next = head;
        head = forHead;
        temp->next = NULL;
        return head;

    }
};