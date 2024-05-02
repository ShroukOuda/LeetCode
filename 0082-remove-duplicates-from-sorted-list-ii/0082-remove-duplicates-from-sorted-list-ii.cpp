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
    ListNode* deleteDuplicates(ListNode* head) {
        map <int, int> mp;
        ListNode *temp = head, *remove, *prev;
        while (temp)
        {
            mp[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        while (temp)
        {
            if (mp[temp->val] > 1)
            {
                remove = temp;
                while (--mp[temp->val])
                {
                    remove = remove->next;
                }
                if (temp == head)
                    head = remove->next;
                else
                {
                    temp = prev;
                    temp->next = remove->next;
                }
            }
            prev = temp;
            temp = temp->next;
        }
    return head;
    }
};