Node* rotate(Node* head, int k) {
    // Your code here
    Node *cur = head;
    int c = 0;
    Node *prev;
    while(cur && c<k){
        prev = cur;
        cur = cur->next;
        c++;
    }
    if(!cur)
        return head;
    prev->next = NULL;
    Node *temp = cur;
    
    while(temp->next)
        temp = temp->next;
    temp->next =head;
    return cur;
}
