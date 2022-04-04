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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head;
        vector<int> vec;
        
        while(temp != NULL) {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        
        int t = vec[0+k-1];
        vec[0+k-1] = vec[vec.size()-k];
        vec[vec.size()-k] = t;
        
        ListNode *ans = new ListNode(vec[0]);
        ListNode *ansT = ans;
        
        for(int i = 1; i < vec.size(); i++) {
            ansT->next = new ListNode(vec[i]);
            ansT = ansT->next;
        } 
        
        return ans;
    }
};
