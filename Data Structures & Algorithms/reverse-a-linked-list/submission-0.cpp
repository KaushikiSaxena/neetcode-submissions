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
//Time Complexity:O(n) Space Complexity O(1)//
class Solution {
public:
    ListNode* reverseList(ListNode* head) {//3 pointer nodes,curr changes current node,prev keeps track of previous nodes so that order can be changed, next stores address for next node after current//
        ListNode *curr = head;//starting from head//
        ListNode *prev = nullptr;//initialised to nullptr because reversed list will have null as it's last node as well
        ListNode *next = nullptr;

        while(curr != nullptr){//till current is null(start of the list)//
            next = curr->next;//saving address for next node to current//
            curr->next =prev;//next of current changes to element before it to reverse the list//
            prev=curr;//one step forward(prev to current)//
            curr = next;//one step forward(current to next)//
            
        }
        return prev;//prev will be the head//
    }
};
