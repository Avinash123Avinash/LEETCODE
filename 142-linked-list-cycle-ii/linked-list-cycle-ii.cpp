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
        if(head==nullptr || head->next==nullptr)
        return 0;
        map<ListNode*,int>mpp;
        mpp[head]=0;
        int cnt=0;
    ListNode*slow=head;
    // ListNode*fast=head;
    while(slow!=nullptr)
    {
        slow=slow->next;
        cnt++;
        // fast=fast->next->next;
        if(mpp.find(slow)!=mpp.end())
        {
        return slow;
        }
        mpp[slow]=cnt;
    }
    return 0;
    }
};