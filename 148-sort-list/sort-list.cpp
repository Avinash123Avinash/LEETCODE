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
    ListNode* sortList(ListNode* head) {
        ListNode*temp=head;
        vector<int>ans;
       
        while(temp!=nullptr)
        {
            ans.push_back(temp->val);
               temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        temp=head;
        int cnt=0;
        while(temp!=nullptr)
        {
         temp->val=ans[cnt];
         temp=temp->next;
         cnt++;
        }
        return head;
    }
};