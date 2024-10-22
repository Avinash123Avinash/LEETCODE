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
        map<ListNode *,int>hashnet;
       
        while(temp!=NULL)
        {
            //  hashnet.insert(temp);
            // temp=temp->next;
            if(hashnet[temp]==1)
            {
                return true;
            }
            hashnet[temp]=1;
            temp=temp->next;

        }
        return false;
    }
};