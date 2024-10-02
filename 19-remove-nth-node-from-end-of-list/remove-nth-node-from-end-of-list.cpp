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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)
        return NULL;
        ListNode* temp=head;
        int cnt1=0;
        while(temp!=NULL)
        {
            cnt1++;
            temp=temp->next;
        }
        if(cnt1==1)
        return NULL;
        if(cnt1-n==0)
        {
            head=head->next;
            return head;
        }
        temp=head;
        int cnt2=0;
        while(temp->next!=NULL)
        {
          cnt2++;
          if(cnt2==cnt1-n)
          {
            break;
          }
          temp=temp->next;
        }
        temp->next=temp->next->next;
        // delete temp->next;
        return head;

    }
};