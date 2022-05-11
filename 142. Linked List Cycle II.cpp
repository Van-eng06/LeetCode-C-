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
    ListNode *detectCycle(ListNode *head)
    {
	//initialize pointers
        ListNode* slow = head;
        ListNode* fast = head;
	
	//base case to make sure a cycle is present
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow)
            {
                fast = head;
				//what if fast and slow end up at head ?
                if(slow == fast)
                {
                    return slow;
                }
				//before both pointers meet
                while(fast->next != slow->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
				//meeting point
                return slow->next;
            }
        }
        return NULL;
    }
};
