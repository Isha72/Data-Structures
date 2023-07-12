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
        if(head == NULL) return false;
        ListNode* fp = head, *sp = head;
        int len = 0;
        while(fp && fp->next)
        {
            fp = fp->next->next;
            sp = sp->next;
            if(fp == sp) return true;
        }
        return false;
    }
};
