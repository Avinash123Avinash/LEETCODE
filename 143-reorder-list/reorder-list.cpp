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
    void reorderList(ListNode* head) {
        if(head==nullptr)
        return;
        vector<int>ans;
     
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size();
        int cnt=n;
        vector<int>last(n,0);
        
        for(int i=0;i<ans.size();i++)
        {
           if(i%2==0)
           {
            last[i]=ans[(i/2)];
           }
           else
           {
           cnt=cnt-1;
             last[i]=ans[cnt];
           }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<last[i];
        // }
        temp=head;
        for(int i=0;i<n;i++)
        {
           temp->val=last[i];
           temp=temp->next;
        }
       
    }
};