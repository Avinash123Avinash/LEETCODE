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
    ListNode *detectCycle(ListNode *head) {
         if(head==NULL || head->next==NULL)
         return NULL;
         
         ListNode * temp=head;
         map<ListNode *,int>hashnet;
       
        while(temp!=NULL)
        {
            //  hashnet.insert(temp);
            // temp=temp->next;
            if(hashnet[temp]==1)
            {
                return temp;
            }
            hashnet[temp]=1;
            temp=temp->next;
    }
    return temp;
    }

};