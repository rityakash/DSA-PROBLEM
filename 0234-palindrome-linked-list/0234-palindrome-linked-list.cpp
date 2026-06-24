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
    bool isPalindrome(ListNode* head) {
        // if(head->next==NULL)
        // return 1;
        // //count number of nodes 
        // int count = 0;
        // ListNode *temp = head;
        // while(temp)
        // {
        //     count++;
        //     temp = temp->next;
        // }
        //  count/=2;
        //  ListNode *curr = head, *prev=NULL;
        //  //skip number of nodes
        //  while(count--)
        //  {
        //     prev = curr;
        //     curr = curr->next;
        //  }
        //  prev->next = NULL;

        //  //reverse the second linked list ,
        //  ListNode *front;
        //  prev = NULL;

        //  while(curr)
        //  {
        //     front = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = front;
        //  }

        //  ListNode *head1 = head, *head2 = prev;
        //  //check pallindrome
        //  while(head1)
        //  {
        //     if(head1->val!=head2->val)
        //     return 0;
        //     head1 = head1->next;
        //     head2=head2->next;
        //  }
        //  return 1;
     stack<int> st;
    ListNode* temp = head;

    // Push all elements into stack
    while (temp != NULL) {
        st.push(temp->val);
        temp = temp->next;
    }

    // Compare while popping
    temp = head;
    while (temp != NULL) {
        if (st.top() != temp->val)
            return false;  // Mismatch found
        st.pop();
        temp = temp->next;
    }

    return true; 

        //  ListNode* temp=head;
        // ListNode* mylist=head;
        // reverse.mylist();

        // while(temp!=NULL){
        //     if(temp->data==mylist->data)
        //     return true;

        //     temp=temp->next;
        //     mylist=mylist->next;
        // }
        // return false;

    }
};