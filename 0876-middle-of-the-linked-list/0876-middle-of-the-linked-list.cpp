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
    ListNode* middleNode(ListNode* head) {
        // 2nd approach(optimal)   T.C =O(n)
                                 //S.c=O(1)
        ListNode *slow = head, *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;

        //brute force    time complexity = O(n)
                        // spce complexity =O(n)
        // int count = 0;

        // ListNode *temp = head;

        // while(temp!=NULL)
        // {
        //     count++;
        //     temp = temp->next;
        // }

        // count/=2;

        // // this number of step i have to take from start
        // temp = head;
        // while(count--)
        // temp = temp->next;

        // return temp;
    }
};