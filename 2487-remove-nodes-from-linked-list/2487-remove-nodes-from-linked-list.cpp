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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>bucket;
        ListNode* temp = head;
        while(temp != NULL){
            bucket.push(temp);
            temp=temp->next;
        }
        int maxi = INT_MIN;
        ListNode* answer = NULL;
        while(!bucket.empty()){
            ListNode* c = bucket.top();
            bucket.pop();
            if(c->val>=maxi){
                c->next=answer;
                answer=c;
                maxi=c->val;
            }
        }
        return answer;
    }
};