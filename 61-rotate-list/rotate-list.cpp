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
        if(head==nullptr || head->next==nullptr)
        return head;
      ListNode*tail=head;
      int cnt=1;
      while(tail->next!=nullptr)
      {
        tail=tail->next;
        cnt++;
      }
      tail->next=head;
      int pos=cnt-k%cnt;
      int cnt1=1;
      tail=head;
      while(tail!=nullptr)
      {
          if(cnt1==pos)
        {
            head=tail->next;
            tail->next=nullptr;
            break;
        }
        tail=tail->next;
        cnt1++;
      
      }
        return head;
    }
};