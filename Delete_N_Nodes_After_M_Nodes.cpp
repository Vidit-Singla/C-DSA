/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        if(!head) return head;
        Node* it = head;
        for(int i=0; i<m-1; i++){
            if(!it) return;
            it = it->next;
        }
        if(!it) return head;
        Node* mth = it;
        it = mth->next;
        for(int i=0; i<n;i++){
            if(!it) break;
            Node* temp = it->next;
            delete it;
            it = temp;
        }
        mth->next = it;
        linkdelete(it,m,n);
    }
};