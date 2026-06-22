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
// Time Complexity: O(n) Space Complexity: O(1)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *l1=list1,*l2=list2;//pointers to iterate through both lists
        ListNode L;//a dummy list to start from (so it isn't a null pointer and we can use curr->next later without causing memory fault)
        ListNode *curr = &L;//giving curr pointer address of dummy
          while (l1 != nullptr && l2 != nullptr) {//till any one of the lists end
            if(l1->val <=l2->val){//comparing values, smaller value gets added to resulting list
                curr->next = l1;//curr points to smaller
                l1=l1->next;//move forward
            }
            else{
                curr->next=l2;//curr points to smaller
                l2=l2->next;//moves forward
            }
            curr = curr->next;//move forward in resulting list
        }
        if (l1 != nullptr) {//once one list is ended, append the rest of another to the resulting list
            curr->next = l1;
        } else {
            curr->next = l2;
        }
        return L.next;//return dummy.next as resulting list actually starts from there
    }
};
