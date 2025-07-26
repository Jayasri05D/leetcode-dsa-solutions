//https://leetcode.com/problems/add-two-numbers/
//Approach
//declare a new node to store the added values and then add the two node to the sum variable one by one.
//keep a carry variable too

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
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        int carry=0;
        while(l1||l2||carry)
        {
            int sum=carry;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
        }
        return dummy->next;
    }
};

//Time Complexity O(max(N, M))
//space Complexity O(max(N, M))
