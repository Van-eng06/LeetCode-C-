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

// All we need to do is to just traverse complete linked list till the last while simultaneously storing all node values in a vector. Now the problem becomes super easy. We just have to sum up the twin index values and update the maximum value at every incidence.

class Solution {
public:
    int pairSum(ListNode* head) {
        int sum=0,mx=0;
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<=v.size()/2-1;i++){
            sum+=v[i]+v[v.size()-1-i];
            mx=max(mx,sum);
            sum=0;
        }
        return mx;
    }
};
