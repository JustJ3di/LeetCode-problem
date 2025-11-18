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

        unordered_map<ListNode*,int>table;
        ListNode *temp = head;
        while(temp){
            if(table.contains(temp))
                return true;
            table[temp]++;
            temp = temp->next;
        }


        return false;
    }
};
