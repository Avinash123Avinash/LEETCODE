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
    ListNode* oddEvenList(ListNode* head) {
        queue<int>qe;
        queue<int>qo;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            if(cnt%2!=0)
            {
              qo.push(temp->val);
            }
            else
            {
                qe.push(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(!qo.empty())
            {
                temp->val=qo.front();
                qo.pop();
            }
            else{
                temp->val=qe.front();
                qe.pop();
            }
            temp=temp->next;
        }
        return head;

    }
};