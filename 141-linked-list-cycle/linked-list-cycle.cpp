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
        map<ListNode*,int>mpp;
        ListNode*temp=head;
        mpp[head]=1;
        while(temp!=nullptr)
        {
            
            temp=temp->next;
            if(mpp.find(temp)!=mpp.end())
            return true;
            mpp[temp]=1;
        }
return false;
    }
};