class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (!head || !head->next)
            return head;
        int cnt = 0;
        ListNode* temp = head;
        while (temp != 0) {
            cnt++;
            temp = temp->next;
        }
        int mid = cnt / 2;
        temp = head;
        while (mid--) {
            temp = temp->next;
        }
        return temp;
    }
};


/*
ListNode* slow = head;
ListNode* fast = head;

while (fast && fast->next) {
    slow = slow->next;       // Moves 1 step
    fast = fast->next->next; // Moves 2 steps
}

return slow; // Middle node
}
*/