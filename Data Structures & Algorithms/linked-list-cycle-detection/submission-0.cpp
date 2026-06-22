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
//Time Complexity: O(n) Space Complexity: O(n)
class Solution {
public:
    bool hasCycle(ListNode* head) {
     unordered_set<ListNode*> seen;//hash set to keep track of visited nodes
     ListNode *curr= head;

     while(curr){
if(seen.find(curr) != seen.end()){//if visited
    return true;//cycle exists
}
seen.insert(curr);//if not visited
curr = curr->next;//move forward
     }   
     return false;//cycle dosen't exist
    }
};
