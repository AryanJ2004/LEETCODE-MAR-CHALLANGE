/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p,*q;
        if(!head || !head->next)
        return false;
        p=q=head;
        do
        {
            p=p->next;
            q=q->next;
            q=q?q->next:q;
        }while(p&&q && p!=q);
        if(p==q)
        return true;
        else
        return false;
    }
};