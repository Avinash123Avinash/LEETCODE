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
        if(head==NULL || head->next==NULL)
        return false;
        ListNode * temp=head;
        set<ListNode *>hashnet;
       
        while(temp->next!=NULL)
        {
             hashnet.insert(temp);
            temp=temp->next;
            if(hashnet.find(temp->next)!=hashnet.end())
            {
                return true;
            }

        }
        return false;
    }
};