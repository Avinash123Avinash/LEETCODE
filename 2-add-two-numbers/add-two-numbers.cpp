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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int>st1;
        queue<int>st2;
        ListNode* temp1=l1;
         ListNode* temp2=l2;
        while(temp1!=NULL)
        {
            st1.push(temp1->val);
            temp1=temp1->next;
        }
          while(temp2!=NULL)
        {
            st2.push(temp2->val);
            temp2=temp2->next;
        }
        vector<int>ans;
        int q=0;
        while(!st1.empty() and !st2.empty())
        {
            int a=st1.front();
            st1.pop();
            int b=st2.front();
            st2.pop();
            int r=(a+b+q)%10;
            ans.push_back(r);
            q=(a+b+q)/10;
            
        }
        while(!st1.empty())
        {
            int a=st1.front();
            st1.pop();
            int r=(a+q)%10;
            ans.push_back(r);
            q=(a+q)/10;
        }
        while(!st2.empty())
        {
           int a=st2.front();
            st2.pop();
            int r=(a+q)%10;
            ans.push_back(r);
            q=(a+q)/10;
        }
        if(q)
        ans.push_back(q);
      ListNode* head= new ListNode(ans[0]);
   ListNode* mover = head;
    for(int i=1;i<ans.size();i++)
    {
       ListNode* temp= new ListNode(ans[i]);
       mover->next=temp;
       mover=temp;
    }
    return head;

    }
};