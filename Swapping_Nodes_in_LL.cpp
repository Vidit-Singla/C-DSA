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
    ListNode* swapNodes(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        if(!head || !head->next) return head;
        int lpos = k;
        int rpos = len-k+1;
        if(rpos < lpos) swap(lpos,rpos);
        if(lpos==rpos) return head;
        if(len==2){
            ListNode* nextNode = head->next;
            nextNode->next = 0;
            head->next = 0;
            head = nextNode;
            return head;
        }
        if(lpos==1){
            ListNode* lp = 0;
            ListNode* ln = head;
            ListNode* rp = head;
            for(int i=0; i<rpos-2; i++){
                rp = rp->next;
            }
            ListNode* rn = rp->next;
            ListNode* rsave = rn->next;
            rn->next = ln->next;
            rp->next = ln;
            ln->next = rsave;
            head = rn;
            return head;
        }     
        int n = rpos-lpos-1;
        if(n==0){
            ListNode* lp = head;
            for(int i=0; i<lpos-2; i++){
                lp = lp->next;
            }
            ListNode* ln = lp->next;
            ListNode* rp = head;
            for(int i=0; i<rpos-2; i++){
                rp = rp->next;
            }
            ListNode* rn = rp->next;
            ListNode* rsave = rn->next;
            lp->next = rp->next;
            rn->next = rp;
            rp->next = rsave;
            return head;
        }
        else{
            ListNode* lp = head;
            for(int i=0; i<lpos-2; i++){
                lp = lp->next;
            }
            ListNode* ln = lp->next;
            ListNode* rp = head;
            for(int i=0; i<rpos-2; i++){
                rp = rp->next;
            }
            ListNode* rn = rp->next;
            ListNode* rsave = rn->next;

            lp->next = rn;
            rn->next = ln->next;
            rp->next = ln;
            ln->next = rsave;
            return head;
        }
    }
};