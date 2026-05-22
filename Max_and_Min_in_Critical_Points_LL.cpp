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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        vector<int> ans = {-1,-1};
        if(len<=2){
            return ans;
        }
        temp = head->next;
        ListNode* prev = head;
        ListNode* forw = temp->next;
        vector<int> v;
        int c = 2;
        while(forw){
            if((temp->val > prev->val && temp->val > forw->val) || (temp->val < prev->val && temp->val < forw->val)){
                v.push_back(c);
            }
            c++;
            prev = prev->next;
            temp = temp->next;
            forw = forw->next;
        }
        if(v.size() < 2) return ans;
        int mx = v.back() - v.front();

        int mn = INT_MAX;

        for(int i = 1; i < v.size(); i++){
            mn = min(mn, v[i] - v[i-1]);
        }

        ans[0] = mn;
        ans[1] = mx;

        return ans;
        
    
        return ans;
        
    }
};