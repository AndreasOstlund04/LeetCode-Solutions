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

        ListNode* result = new ListNode(0);

		int carry = 0;

        int sum = 0;

		while(l1 || l2){
			
			sum = 0;
			carry = carry / 10;
				
			if(l1){
				
				sum = sum + l1->val;

				l1 = l1->next;
			}
			if(l2){

				sum = sum + l2->val;
				
				l2 = l2->next;
			}
			if(sum >= 10){

				carry = sum % 10;
			}
			
			sum = sum + carry;

			result->val = sum;
			result->next;
		}

	result->val = carry;
	result->next;
    return result;
    }
};