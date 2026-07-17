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
//Time Complexity: O(n) Space Complexity: O(1)
class Solution {
   public:
    bool hasCycle(ListNode* head) {
        ListNode *fast = head, *slow = head;//two pointers
        while (fast != nullptr && fast->next != nullptr) {//check if any of them is null ptr
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {//if they point to same node, it's a cycle
                return true;
            }
        }
        return false;
    }
};
